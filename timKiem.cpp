#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++)  cin >> a[i];
		int oke=-1;
		for(int i=0; i<n; i++){
			if(a[i]==k){
				oke = 1;
				break;
			}
		}
		cout << oke << endl;
	}
}
/*
2 
5 16
2 4 7 9 16
7 98
1 22 37 47 54 88 96
*/
