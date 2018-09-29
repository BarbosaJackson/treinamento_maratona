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
	int n, qtd_m, qtd_j, x;
	cin >> n;
	while(n != 0) {
		qtd_m = qtd_j = 0;
		for(int i = 0; i < n; i++) {
			cin >> x;
			if(x == 0) qtd_m++;
			else qtd_j++;
		}
		cout << "Mary won " << qtd_m << " times and John won " << qtd_j << " times" << endl;
		cin >> n;
	}
	return 0;
}