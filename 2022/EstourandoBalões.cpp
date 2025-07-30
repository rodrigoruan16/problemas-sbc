// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// Data: 09/07/2025
// https://codeforces.com/gym/103960/problem/E

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mp;
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (mp.find(arr[i]) != mp.end() && mp[arr[i]] > 0) {
            mp[arr[i]]--;
            mp[arr[i] - 1]++;
        } else {
            total++;
            mp[arr[i] - 1]++;
        }
    }
    
    cout << total << "\n";

    return 0;
}