// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/origin/94
// 18/10/2022 12:31:10

#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int j, r;
	cin >> j >> r;

	vector<int> players = {};
	for (int i = 0; i < j; i++) {
		players.push_back(0);
	}

	for (int i = 0, x = 0; i < r * j; i++, x++) {
		if (x == players.size()) {
			x = 0;
		}

		int k; cin >> k;
		players[x] += k;
	}

	int highestVal = players[0];
	int idx = 0;

	for (int i = 1; i < players.size(); i++) {
		if (players[i] >= highestVal) {
			highestVal = players[i];
			idx = i;
		}
	}

	cout << idx + 1 << endl;

	return 0;
}