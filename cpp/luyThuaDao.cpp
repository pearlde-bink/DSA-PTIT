#include <iostream>
#include <math.h>
using namespace std;
long long m = 1e9+7;

int poww(long long n, long long k){
	if(k==0) return 1;
	long long c = k/2;
	long long x = poww(n, k/2);
	if(k%2==0) return (x*x)%m;
	else return ((x%m * x%m) * n)%m;
}

long long dao(long long n){
	long long i=0;
	while(n>0){
		i=i*10+n%10;
		n/=10;
	}
	return i;
}

int main() {
   int t; cin >> t;
   while(t--){
       long long n; cin >> n;
       cout << poww(n, dao(n)) << endl;
   }
}
