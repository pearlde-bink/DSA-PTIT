#include <iostream>
#include <math.h>
using namespace std;
long long m = 1e9+7;

int poww(long long n, long long k){
	if(k==1) return n;
	long long c = k/2;
	long long x = poww(n, k/2);
	if(k%2==0) return (x*x)%m;
	else return ((x%m * x%m) * n)%m;
}

int main() {
   int t; cin >> t;
   while(t--){
       int n, k; cin >> n >> k;
       cout << poww(n, k) << endl;
   }
}
