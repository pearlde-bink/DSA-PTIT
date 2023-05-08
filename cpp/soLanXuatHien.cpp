#include <iostream>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		int dem=0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for (int i = 0; i < n-1; i++){
			if(a[i]==k) dem++;
		}
		if(dem==0) cout << "-1" << endl;
		else cout << dem << endl;
	}
}
/*
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3 
*/
