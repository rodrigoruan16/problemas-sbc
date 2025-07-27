// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/origin/94
// 31/03/2024 23:42:54

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int maxi = max(a, b);

    if (a == b)
    {
        cout << a << "\n";
    }
    else
    {
        cout << maxi << "\n";
    }
}