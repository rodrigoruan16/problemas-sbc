// Autor: Rodrigo Ruan - Projeto Maratona de Programacao - UNIFEI
// https://judge.beecrowd.com/pt/problems/origin/94
// 26/05/2024 17:06:14

#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;

ll factorial(ll f) {
	ll total = 1;
	
	for (int i = 2; i <= f; i++) {
		total *= i;
	}
	
	return total;
}

int main() {
	ll n;
	cin >> n;
	
	ll sum = 0;
	
	for (int i = 1; n >= 0; i++) {
		if (factorial(i) > n) {
			n -= factorial(i-1);
			sum += 1;
			i = 1;
		}
	} 
	
	cout << sum -1 << endl;
	
	return 0;
}