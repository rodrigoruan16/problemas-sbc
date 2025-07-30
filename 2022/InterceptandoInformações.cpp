// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// Data: 09/07/2025
// https://codeforces.com/gym/103960/problem/I

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