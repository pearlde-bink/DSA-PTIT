#include<bits/stdc++.h>
using namespace std;

int n, a[50];
string k;
vector<vector<int>> v;
vector<int> v2;
vector<string> v3;

void solve(int pos){
	for(int i=pos+1; i<=n; i++){
		if(a[i] > a[pos]){
			v2.push_back(a[i]);
			if(v2.size() > 1){
				v.push_back(v2);
			}
			solve(i);
			v2.erase(v2.end()-1, v2.end());
		}
	}
}

int main(){
	cin >> n;
	a[0] = 0;
	for(int i=1; i<=n; i++)
		cin >> a[i];
	solve(0);
	for(int i=0; i<v.size(); i++){
		k = "";
		for(int j=0; j<v[i].size(); j++){
			k += to_string(v[i][j]);
			k += " ";
		}
		v3.push_back(k);
	}
	sort(v3.begin(), v3.end());
	for(int i=0; i<v3.size(); i++){
		cout << v3[i] << endl;
	}
}

/*
4
6 3 7 11
*/
