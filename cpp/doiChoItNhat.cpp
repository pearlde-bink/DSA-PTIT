#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		int min, dem=0;
		for(int i=0; i<n-1; i++){
			min = i;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[min]) min=j;
			}
			if(min!=i) {
				swap(a[i], a[min]);
				dem++;
			}
		}
		cout << dem << endl;
	}
}
/*
2
4
4 3 2 1
5
1 5 4 3 2
*/
