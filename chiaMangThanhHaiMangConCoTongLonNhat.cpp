#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n]; 
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		int hieu1 = 0, hieu2 = 0;
		int addr = min(k, n-k);
		for(int i=0; i<n; i++){
			if(i<addr) hieu1+=a[i];
			else hieu2+=a[i];
		}
		cout << abs(hieu1 - hieu2) << endl;
	}
}

/*
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
*/
