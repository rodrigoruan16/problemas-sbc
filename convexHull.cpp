#include <bits/stdc++.h>
 
using namespace std;

typedef struct {
    int x, y;
} point;

int cross(point &a, point &b, point &c) {
    double area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);

    if (area < 0) return -1; // clockwise
    if (area > 0) return 1; // counter-clowise

    return 0; // collineares
}

int distSq(point &a, point &b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y); 
}

point get_min(vector<point> &arr) {
    point min = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i].y < min.y || (arr[i].y == min.y && arr[i].x > min.x))
            min = arr[i];
    }

    return min;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    while (1) {
        cin >> n;

        if (n == 0)
            break;

        vector<point> arr(n);

        int x, y;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            point p;
            p.x=x;
            p.y=y;
            arr[i] = p;
        }

        point min_e = get_min(arr);
        cout << "MIN: " << min_e.x << ' ' << min_e.y << "\n";

        sort(arr.begin(), arr.end(), [&min_e](point &a, point &b) {
            int orientation = cross(min_e, a, b);

            if (a.x == min_e.x && a.y == min_e.y)
                return true ;
            if (b.x == min_e.x && b.y == min_e.y)
                return false;

            if (orientation == 0) // pontos colineares
                return distSq(min_e, a) > distSq(min_e, b);

            return orientation == 1;
        });

        for (int i = 1; i < arr.size(); i++) {
            cout << arr[i].x << ' ' << arr[i].y << "\n";
        }
    }

    return 0;
}