#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	set < int > freq;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		freq.insert(x);
	}
	cout << freq.size() << endl;
	return 0;
}