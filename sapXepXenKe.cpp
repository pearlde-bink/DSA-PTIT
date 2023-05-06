#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
		}
		sort(a, a+n);
		int b = 0;
		int e = n-1;
		while(b<e){
			cout << a[e] << " " << a[b] << " ";
			b++;
			e--;
		}
		if(n%2==1) cout << a[n/2];
		cout << endl;
	}
}
/*
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2
*/
