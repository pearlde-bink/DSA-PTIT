#include <bits/stdc++.h>
using namespace std;

int check(string s){
	string a ="";
	int n = s.size();
	for(int i=0; i<n-1; i++){
		if(s[i+1]>=s[i]){
//			a+=s[i];
			a += s[i+1];
		}
	}
	return a.size() + 1;
}

int main() {
	string s; cin >> s;
	cout << check(s) << endl;
}
