// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(begin(a), begin(a)+3);

    set<int> st = {a[0], a[1], a[2]};

    if (a[2] == a[1] + a[0] || st.size() <= 2) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}