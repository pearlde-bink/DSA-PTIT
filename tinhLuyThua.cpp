#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long m = 1e9+7;

long long poww(long long a, long long b){
	if(b==1) return a;
	long long c = poww(a, b/2);
	if(b % 2 == 0) return (c * c) % m;
	else return (((c * c) % m) * a) % m; 
}

int main(){
	while(1){
   		long long a, b; cin >> a >> b;
		if(a == 0 && b == 0) return 0;
		if(b == 0) cout << 1 << endl;
		else cout << poww(a, b) << endl;
   }
}

/*
2 3
2 4
3 2
0 0
*/

