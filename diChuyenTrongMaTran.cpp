#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

//sai
int main(){
    int t;
    cin >> t;
    while (t--){
        int m, n; cin >> m >> n;
        int a[m][n];
        for(int i=0; i<m; i++)
        	for(int j=0; j<n; j++)
				cin >> a[i][j];
		int c[1001][1001];
		memset(c, 0, sizeof(c));
		for(int i=0; i<=n-1; i++){
			for(int j=0; j<=min(i, n+m-2); j++){
				if(j==0 || j==i) c[i][j] = 1;
				else c[i][j] = (c[i-1][j-1] % mod + c[i-1][j] % mod) % mod;
			}
		}
		cout << c[n-1][n+m-2] << endl;
    }
}

/*
2
2  3
1  2  3 
4  5  6
2  2
1  2 
3  4
*/
