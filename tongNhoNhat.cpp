#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i=0; i<n; i++) cin >> a[i];
    	sort(a, a+n);
    	long long m1=0, m2=0;
    	for(int i=0; i<n; i+=2) m1 = m1*10 + a[i];
		for(int i=1; i<n; i+=2) m2 = m2*10 + a[i];
		cout << m1 + m2 << endl;
	}
}



