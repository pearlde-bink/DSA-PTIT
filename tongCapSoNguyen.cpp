#include <iostream>
#include<math.h>
#include <algorithm>
using namespace std;

bool prime(int n){
	if(n<2) return false;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0) return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int oke=0;
		for(int i=2; i<=n/2; i++){
			if(prime(i) && prime(n-i)){
				cout << i << " " << n-i;
				oke=1;
				break;
			} 
		}
		if(oke==0) cout << "-1";
		cout << endl;
	}
}
/*
2
4
8
*/
