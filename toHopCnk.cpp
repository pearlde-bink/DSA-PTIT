#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

int main(){
	int t; cin >> t;
	while(t--){
		int c[1001][1001];
		memset(c, 0, sizeof(c));
		int n, k; cin >> n >> k;
		for(int i=0; i<=n; i++){
			for(int j=0; j<=min(i, k); j++){
				if(j==0 || j==i) c[i][j] = 1;
				else c[i][j] = (c[i-1][j-1] % mod + c[i-1][j] % mod) % mod;
			}
		}
		cout << c[n][k] << endl;
	}
}

/*
2
5 2
10 3
*/

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	cout << "helo";
//}

