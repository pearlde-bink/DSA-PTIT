#include <iostream>
#include<set>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set<int> s;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++){
			while(a[i]>0){
				int k=a[i]%10;
				s.insert(k);
				a[i]/=10;
			}
		}
		for(int i : s){
			cout << i << " ";
		}
		cout << endl;
	}
}
/*
2
3
131 11 48
4
111 222 333 446
*/
