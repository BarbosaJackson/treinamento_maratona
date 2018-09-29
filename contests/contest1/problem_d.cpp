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
	int n, m;
	while(cin >> n >> m) {
		int map[n][m];
		int tab_f[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> map[i][j];
				tab_f[i][j] = map[i][j];
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(i > 0 && map[i-1][j] == 1) {
					tab_f[i][j]++;
				}
				if(i < n-1 && map[i+1][j] == 1) {
					tab_f[i][j]++;
				}
				if(j > 0 && map[i][j-1] == 1) {
					tab_f[i][j]++;
				}
				if(j < m-1 && map[i][j+1] == 1) {
					tab_f[i][j]++;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				printf("%d", map[i][j] == 1 ? 9 : tab_f[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}