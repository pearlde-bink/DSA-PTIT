#include<bits/stdc++.h>
using namespace std;

long long m = 123456789;

//xu ly chia so nguyen lon
long long poww(long long n, long long k){
	if(k==1) return n;
	long long x = poww(n, k/2);
	if(k%2==0) return (x * x) % m;
	else return (((x * x) % m) * n) % m;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << poww(2, n-1) << endl;
	}
}
