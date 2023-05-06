#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	sort(a, a+n);
	int kcmax = a[n-1] - a[0];
	int kcmin = 0;
	while(kcmin <= kcmax){
		int giua = (kcmax + kcmin) / 2;
		int truoc = a[0];
		int xe = 1;
		for(int i=1; i<n; i++){
			int now = a[i];
			if(now - truoc >= giua) {
				xe++;
				truoc = now;
			}
		}
		if(xe >= m) kcmin = giua + 1;
		else kcmax = giua - 1;
	}
	cout << kcmax << endl;
} 

/*
5 3
1
2
8
4
9
*/

