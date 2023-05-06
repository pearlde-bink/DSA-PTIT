#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q; cin >> n >> q;
	long long bits = 0;
	for(int i=0; i<q; i++){
		int x, y; cin >> x >> y;
		// << dich trai, ^ xor
		bits ^= ((1 << y) - (1 << (x-1)));
	}
	for(int i = 0; i < n ;i++) cout << ((bits & (1 << i)) ? 1 : 0);
	cout << endl;
}

/*
3 2
1 2
1 3
*/

