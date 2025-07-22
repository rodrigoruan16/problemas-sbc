// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://codeforces.com/gym/105327

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cin.tie(0);ios::sync_with_stdio(0);

    vector<int> fib(50);
    fib[0] = 1, fib[1] = 1;

    for (int i = 2; i < 50; i++)
        fib[i] = fib[i-1] + fib[i-2];

    int n;
    cin >> n;

    cout << fib[n] << "\n";

    return 0;
}