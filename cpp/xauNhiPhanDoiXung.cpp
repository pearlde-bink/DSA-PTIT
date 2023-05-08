#include <bits/stdc++.h>
using namespace std;

bool dx(string s, int l, int r){
	while(l<r){
		if(s[l] != s[r]){
			return false;
		} else{
			l++; r--;
		}
	}
	return true;
}

int main(){
	string s; cin >> s;
	int t; cin >> t;
	while(t--){
		int n = s.length();
		int l, r; cin >> l >> r;
		if(dx(s, l-1, r-1)) cout << " YES" << endl;
		else cout << "NO" << endl;
	}
}

/*
1001010
1
6 7
*/

