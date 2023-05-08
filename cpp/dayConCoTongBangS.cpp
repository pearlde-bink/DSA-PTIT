#include <bits/stdc++.h>
using namespace std;

bool checkSum(int a[], int n, int s){
	int c[n+1][s+1];
	memset(c, 0, sizeof(c));
	for(int i=0; i<=n; i++){
		c[i][0] = 1;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=s; j++){
			if(c[i-1][j] == 1 || (j-a[i] >= 0 && c[i-1][j-a[i]] == 1)){
				c[i][j] = 1;
			}
		}
	}
	return c[n][s] == 1;
} 

int main() {
	int t; cin >> t;
	while(t--){
		int n, s; cin >> n >> s;
		int a[n+1];
		for(int i=1; i<=n; i++) cin >> a[i];
		if (checkSum(a, n, s)) {
			cout << "YES";
		} else {
			cout <<"NO";
		}
		cout << endl;
	}
}

/*
2
5 6
1 2 4 3 5
10 15
2 2 2 2 2 2 2 2 2 2
*/
