// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/105327

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cin.tie(0);ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> arr(32, 0);

    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;

        for (int j = 0; temp > 0; j++) {
            if (temp&1)
                arr[j]++;

            temp >>= 1;
        }
    }

    for (int i = 0; i < n; i++) {
        temp = 0;

        for (int j = 0; j < 32; j++) {
            if (arr[j] > 0) {
                arr[j]--;
                temp += pow(2, j);
            }
        }

        cout << temp << " ";
    }

    return 0;
}