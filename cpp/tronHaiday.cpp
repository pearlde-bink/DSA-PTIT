#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		multiset<int> s;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			s.insert(b[i]);
		}
		for(int x : s){
			cout << x << " ";
		}
		cout << endl;
	}
}
/*
1
3 3
10 5 15
20 3 2
*/
