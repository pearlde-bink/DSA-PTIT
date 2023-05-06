#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m, n; 
		cin >> m >> n;
		set<int> se;
		int a[m], b[n];
		for(int i=0; i<m; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
			se.insert(b[i]);
		} 
		
		vector<int> u;
		vector<int> in;
		
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(b[j]==a[i]){
					in.push_back(b[j]);
				}
			}
		}
		sort(in.begin(), in.end());
		for(int i : se){
			cout << i << " ";
		}
		cout << endl;
		for(auto i=in.begin(); i!=in.end(); i++){
			cout << *i << " ";
		}
		cout << endl;
	}
}
/*
1
5 3
1 2 3 4 5
1 2 3
*/
