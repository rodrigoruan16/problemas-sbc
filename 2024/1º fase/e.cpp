// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/105327

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cin.tie(0);ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    if (arr[0][0] < arr[0][1] && arr[0][0] < arr[1][0])
        cout << 0 << "\n";
    else if (arr[0][n-1] < arr[0][n-2] && arr[0][n-1] < arr[1][n-1])
        cout << 1 << "\n";
    else if (arr[n-1][n-1] < arr[n-2][n-1] && arr[n-1][n-1]<arr[n-1][n-2])
        cout << 2 << "\n";
    else
        cout << 3 << "\n";

    return 0;
}