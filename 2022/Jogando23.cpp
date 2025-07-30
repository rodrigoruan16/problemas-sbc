// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/view/3433

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cartas[11];
    fill(begin(cartas), end(cartas), 4);
    cartas[10] = 16;

    int j = 0, m = 0;

    int temp;
    for (int i = 0; i < 2; i++) {
        cin >> temp;
        if (temp > 10)
            temp = 10;
        cartas[temp]--;
        j += temp;
    }

    for (int i = 0; i < 2; i++) {
        cin >> temp;
        if (temp > 10)
            temp = 10;
        cartas[temp]--;
        m += temp;
    }

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 10)
            temp = 10;
        cartas[temp]--;
        j += temp;
        m += temp;
    }

    int ok = 0;
    for (int i = 1; i <= 10; i++) {
        if (cartas[i] > 0 && (m + i == 23 || (j + i > 23 && m + i < 23))) {
            ok = 1;
            cout << i << "\n";
            break;
        }
    }

    if (!ok)
        cout << -1 << "\n";

    return 0;
}