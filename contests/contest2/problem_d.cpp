#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	string ip, server_name;
	map < string, string > servers;
	cin >> n >> m;
	while( n-- ) {
		cin >> server_name >> ip;
		ip += ';';
		servers [ ip ] = server_name;
	}
	while ( m-- ) {
		cin >> server_name >> ip;
		cout << server_name << " " << ip << " #" << servers[ ip ] << endl;
	}
	return 0;
}