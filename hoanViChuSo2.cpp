#include <bits/stdc++.h>
using namespace std;

int lengthOf(int s){
	int dem = 0;
	while(s>0){
		dem++;
		s/=10;
	}
	return dem;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int m = lengthOf(n);
		int a[m];
		for(int i=0; i<m; i++){
			a[i] = n % 10;
			n /= 10;
		}
		sort(a, a+m);
		int b[m-1];
		for(int i=0; i<m; i++) b[i] = a[i];
		bool oke = true;
		while(oke){
			for(int i=0; i<m; i++){
				if(a[0] != 0) cout << a[i];
				else if(a[0] == 0){
					for(int i=1; i<m ; i++){
						cout << a[i];
					}
					break;
				}
			}
			cout << endl;
			int i = m - 2;
			while(i >= 0 && a[i] >= a[i+1]) i--;
			if(i>=0){
				int j = m - 1;
				while(a[j] < a[i]) j--;
				swap(a[i], a[j]);
				int r = i + 1, s = m - 1;
				while(r <= s){
					swap(a[s], a[r]);
					r++; s--;
				}
			}
			else oke = false;
		}
	}
}

/*
2
21
104
*/

