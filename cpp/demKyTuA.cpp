#include <bits/stdc++.h>
using namespace std;

string fibo(int n){
	if(n==0) return "A";
	else if(n==1) return "B";
	else {
		string a = fibo(n-1);
		string b = fibo(n-2);
		return a + b;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		string s = fibo(n);
		int dem = 0;
		for(int i=0; i<k; i++){
			if(s[i] == 'A') dem++;
		}
		cout << dem << endl;
	}
}

/*
4
0 1
1 1
3 2
7 7
*/

