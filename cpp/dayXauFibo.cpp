#include<bits/stdc++.h>
using namespace std;

// xau fibo thu 90
long long fibo[90];

void solve(){
	long long n, i;
	cin >> n >> i;
	while(n > 2){
		if(i <= fibo[n-2]) n-=2;
		else{
			i -= fibo[n-2];
			n -= 1;
		}
	}
	if(n == 1) cout << 'A';
	else cout << 'B';
	cout << endl;
}

int main(){
	fibo[1] = fibo[2] = 1;
	for(int i=3; i<=90; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int t; cin >> t;
	while(t--){
		solve();
	}
}

/*
2
6 4
8 19
*/
