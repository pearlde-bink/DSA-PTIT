#include <bits/stdc++.h>
using namespace std;
int n; 

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
	}
	sort(a, a+n);
	long long max1=max(a[0]*a[1], max(a[0]*a[1]*a[n-1], max(a[n-1]*a[n-2], a[n-1]*a[n-2]*a[n-3])));
	if(max1>0) cout << max1;
	else cout << 0;
}

/*
6
5 10 -2 3 5 2
*/
