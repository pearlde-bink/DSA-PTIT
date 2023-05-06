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
		int n, s = 1e7;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (abs(a[i] + a[j]) < abs(s))
					s = a[i] + a[j];
			}
		}
		cout << s << endl;
	}
}
/*
2
3
-8 -66 -60
6
-21 -67 -37 -18 4 -65  
*/
