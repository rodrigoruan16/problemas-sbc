// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    string w;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
            w += c;
    }

    int ok = 1;

    int i = 0, j = w.size() - 1;

    while (i <= j) {
        if (w[i] != w[j]) {
            ok = 0;
            break;
        }
        i++, j--;
    }

    cout << (ok?"S":"N") << "\n";

    return 0;
}