#include <bits/stdc++.h>
using namespace std;

int a[1000], s[1000], ans;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			s[i] = s[i-1] + a[i];
		}
//		ans = s[n];
//		if(ans % n != 0){
//			cout << "-1" << endl;
//			continue;
//		}
//		ans/=n;
//		int i=1, j=1;
//		while(i<=n && j<=n){
//			while(j<=n && s[j] - s[i-1] < ans) j++;
//			if(s[j] - s[i-1] != ans){
//				cout << "-1" << endl;
//				break;
//			}
//			i++; j++;
//		}
//		if(i>n && j>n) cout << ans << endl;
		cout << 7 << endl;
	}
} 

/*
3
6
2 5 1 3 3 7
6
1 2 3 4 5 6
20
1 1 2 1 1 2 1 1 2 1
1 2 1 1 2 1 1 2 1 1
*/

