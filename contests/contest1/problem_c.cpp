#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair 
#define MAX_SIZE (1 << 20)

typedef long long lli;
typedef vector<lli> vi;
typedef vector<vi> vvi;
typedef pair<lli, lli> ii;
typedef vector<ii> vii;
typedef vector<bool> vb;

int main() {
	int n, m, cont;
	cin >> n >> m;
	while(n != 0 && m != 0) {
		int bilhetes[n+1];
		memset(bilhetes, 0, sizeof(bilhetes));
		cont = 0;
		for(int i = 0; i < m; i++) {
			int x;
			cin >> x;
			bilhetes[x]++;
		}
		for(int j = 0; j < n+1; j++) {
			if(bilhetes[j] > 1) cont++;
		}
		cout << cont << endl;
		cin >> n >> m;
	}
	return 0;
}