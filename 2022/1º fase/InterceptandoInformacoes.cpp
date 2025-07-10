#include <bits/stdc++.h>

using namespace std;

int main() {
    int temp;

    for (int i = 0; i < 8; i++) {
        cin >> temp;

        if (temp == 9) {
            cout << "F\n";
            return 0;
        }
    }

    cout << "S\n";

    return 0;
}