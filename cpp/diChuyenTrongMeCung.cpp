#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> res;
bool check = false;

void init(){
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			cin >> a[i][j];
	res.clear();
	check = false;
}

void Try(int i, int j, string s){
	if(i == 1 && j == 1 && a[i][j] == 0){
		check = false;
		return;
	}
	if(i == n && j == n && a[n][n]){
		check = true;
		res.push_back(s);
		return;
	}
	if(i<n && a[i+1][j]){
		Try(i+1, j, s+"D");
	}
	if(j<n && a[i][j+1]){
		Try(i, j+1, s+"R");
	}
	if((i<n && j<n && !a[i+1][j] && !a[i][j+1]) || i>n || j>n){
		return;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		init();
		Try(1, 1, "");
		if(!check) cout << -1 << endl;
		else{
			sort(res.begin(), res.end());
			for(int i=0; i<res.size(); i++){
				cout << res[i] << " ";
			}
			cout << endl;
		}
	}
}
/*
2
4
1  0  0  0
1  1  0  1 
0  1  0  0 
1  1  1  1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
*/

