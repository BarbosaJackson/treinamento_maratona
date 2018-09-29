#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	while(n != 0 && m != 0) {
		set < int > alice, beatrix;
		int x;
		for(int i = 0; i < n; i++) {
			cin >> x;
			alice.insert(x);
		}
		for(int i = 0; i < m; i++) {
			cin >> x;
			beatrix.insert(x);
		}
		if(alice.size() > beatrix.size()) {
			n = (int)alice.size();
			for(auto i: beatrix) {
				alice.insert(i);
			}
			cout << ((alice.size()) - n) << endl;
		} else {
			n = (int)beatrix.size();
			for(auto i: alice) {
				beatrix.insert(i);
			}
			cout << ((beatrix.size()) - n) << endl;
		}
		cin >> n >> m;
	}
	return 0;
}