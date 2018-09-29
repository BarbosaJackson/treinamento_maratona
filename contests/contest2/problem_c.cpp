#include <bits/stdc++.h>

#define mp make_pair

using namespace std;

int main() {
	int n;
	string s1, s2;
	cin >> n;
	set < pair<string, string> > s;
	while( n-- ) {
		cin >> s1 >> s2;
		s.insert(mp(s1, s2));
	}
	cout << s.size() << endl;
	return 0;
}