#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		for(int i=0; i<n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		sort(a, a+n);
		if(s.size()==1) cout << "-1";
		else{
			cout << a[0] << " " << a[1];
		}
//		if(a[0]!=a[1]) cout << a[0] << " " << a[1];
//		else cout << "-1";
		cout << endl;
	}
}
/*
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1  1  1
*/
