// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/origin/217?sort=Problems.solved&direction=desc

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, w;
    cin >> n >> h >> w;

    char a, b;
    while (n--) {
        cin >> a >> b;

        if ((a == 'Y' && h > 0) || (h > 0 && w == 0)) {
            cout << "Y ";
            h--;
            w++;
        } else {
            cout << "N ";
        }

        if ((b == 'Y' && w > 0) || (h == 0 && w > 0)) {
            cout << "Y\n";
            w--;
            h++;
        } else {
            cout << "N\n";
        }
    }

    return 0;
}