#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair 
#define MAX_SIZE (1 << 20)
#define INF 999999999

typedef long long lli;
typedef vector<lli> vi;
typedef vector<vi> vvi;
typedef pair<lli, lli> ii;
typedef vector<ii> vii;
typedef vector<bool> vb;

int main() {
	int n, x, menor = INF, p_menor;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x;
		if(menor > x) {
			menor = x;
			p_menor = i + 1;
		}
	}
	cout << p_menor << endl;
	return 0;
}