#include <bits/stdc++.h>
using namespace std;
int n; 

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
        	cin >> a[i];
        	b[i]=a[i];
		}
		bool oke = 1;
		sort(b, b+n);
		for(int i = 0; i < n; i++){
			if(a[i] != b[i] && a[i] != b[n-i-1]){
				oke = 0;
				break;
			}
		}
		if(oke) cout << "Yes" << endl;
		else cout << "No" << endl;
    }
}

/*
2
7
1 6 3 4 5 2 7
7
1 6 3 4 5 7 2
*/
