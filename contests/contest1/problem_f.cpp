#include <bits/stdc++.h>

using namespace std;

int main() {
	int q, min, max, cont = 0, x;
	while(scanf("%d %d %d", &q, &min, &max) != EOF) {
		cont = 0;
		while(q--) {
			cin >> x;
			if(x >= min && x <= max) cont++;
		}
		cout << cont << endl;
	}
	return 0;
}