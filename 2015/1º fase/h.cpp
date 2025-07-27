// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/origin/94
// 28/11/2024 22:51:21

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second != b.second ? a.second > b.second : a.first < b.first;
}

int main()
{
    vector<pair<int, int>> v;
    int n, ans = 0, x, y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        int dir = INT_MAX, esq = INT_MIN;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j].first > v[i].first)
            {
                if (v[j].first < dir)
                {
                    ans++;
                    dir = v[j].first;
                }

                continue;
            }

            if (v[j].first > esq)
            {
                esq = v[j].first;
                ans++;
            }
        }
    }

    cout << ans << '\n';
}