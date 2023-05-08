#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> m;
		for(int i=0; i<n; i++){
			cin >> a[i];
			m[a[i]]++; //tao key & value cho cac phan tu trong map
		}
		vector<pair<int, int>> v(m.begin(), m.end()); //copy map sang vector
		sort(v.begin(), v.end(), cmp); 
		for(auto x : v){
			while(x.second--){
				cout << x.first << " ";
			}
		}
		cout << endl;
	}
}
/*
2
5
5 5 4 6 4
5
9 9 9 2 5
*/  
