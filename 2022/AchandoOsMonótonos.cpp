// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// Data: 09/07/2025
// https://codeforces.com/gym/103960/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    char last = 'b';
    int temp = 0, total = 0;

    for (int i = 0; i < n; i++) {
        if (last == 'a' && s[i] == 'a') {
            temp++;
        } else {
            if (temp > 0)
                total += temp + 1;

            temp = 0;
        }

        last = s[i];
    }

    if (temp > 0)
        total += temp + 1;

    cout << total << "\n";

    return 0;
}