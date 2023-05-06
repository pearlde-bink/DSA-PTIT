#include<bits/stdc++.h>
using namespace std;

bool uoc(int n){
	for(int i=n/2; i>=1; i--){
		if(n%i==0){
			break;
		}return true;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int a = 0;
		int n; cin >> n;
		for(int i=n/2; i>=1; i--){
			int dem = 0;
			if(n%i==0){
				dem++;
				a+=i;
			} 
			int b = n/=i;
			a+=b*pow(10, dem);
			if(n==1) break;
		}
		cout << a << endl;
	}
}

/*
2
1
10
*/

//9 = 33
//16 = 28
//15 = 35
