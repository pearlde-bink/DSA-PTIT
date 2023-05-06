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
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		reverse(a, a+n);
		for (int i = 0; i < k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
/*
2
3
-8 -66 -60
6
-21 -67 -37 -18 4 -65  
*/
