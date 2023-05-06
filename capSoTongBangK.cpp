#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n];
		int dem=0;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]+a[j]==m) dem++;
			}
		}
		cout << dem << endl;
	}
}
/*
2
5 9 
1 5 4 1 2
3 2
1 1 1
*/
