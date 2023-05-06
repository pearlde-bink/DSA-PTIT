#include <bits/stdc++.h>
using namespace std;

int c[10];

void dem(int n){
	if(n < 10){
		memset(c, 0, sizeof(c));
		c[n]++;
		return;
	}
	int m = n, p = 1;
	while(m>=10){
		m/=10;
		p*=10;
	}
	dem(m*p-1);
	for(int i=0; i<10; i++){
		c[i]+=(p/10)*(m-1);
		if(i<m) c[i] += p;
	}
	dem(n-m*p);
}

int main(){
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		memset(c, 0, sizeof(c));
		dem(b);
		for(int i=0; i<9; i++){
			cout << c[i] << " ";
		}
		cout << c[9] << endl;
	}
}

/*
3
1 9
10 456
123 2437
*/

