// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/104555

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    string v = s;
    for (int i = 0; i < k; i++) {
        vector<char> ar;

        for (int j = i; j < s.size(); j += k)
            ar.push_back(s[j]);

        sort(ar.begin(), ar.end());

        for (int j = i, l = 0; j < s.size(); j += k)
            v[j] = ar[l++];
    }

    cout << v << "\n";

    return 0;
}