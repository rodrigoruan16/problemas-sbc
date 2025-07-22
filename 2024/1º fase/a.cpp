// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/105327

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cin.tie(0);ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    k -= (n-1);

    cout << k/n<< "\n";

    return 0;
}