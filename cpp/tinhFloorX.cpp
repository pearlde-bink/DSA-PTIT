#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		int max1 = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i] <= x){
				max1 = max(max1, i+1);
			}
		}
		if(max1 == 0) cout << -1 << endl;
		else cout << max1 << endl;
	}
}

/*
3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19
*/

