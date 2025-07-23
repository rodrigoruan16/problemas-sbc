// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/104555

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin >> n  >> h;

    vector<int> arr(n);

    int total = 0, temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (h >= temp)
            total++;
    }

    cout << total << "\n";

    return 0;
}