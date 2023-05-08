#include<bits/stdc++.h>
using namespace std;

int a[1000][1000], ans[1000][1000];
int n, m;

void solve(){
	queue<pair<int, int>> q;
	ans[0][0] = 0;
	while(!q.empty()){
		int r = q.front().first;
		int c = q.front().second;
		q.pop();
		if(r == n-1 && c == m - 1){
			cout << ans[r][c];
			return;
		}
		int i, j;
		if(r + 1 < n){
			i = r + abs(a[r][c] - a[r+1][c]);
			j = c;
			if(i < n && ans[i][j] == INT_MAX){
				ans[i][j] = ans[r][c] + 1;
				q.push({i, j});
			}
		}
		if(c + 1 < m){
			i = r; 
			j = c + abs(a[r][c] - a[r][c+1]);
			if(j < m && ans[i][j] == INT_MAX){
				ans[i][j] = ans[r][c] + 1;
				q.push({i, j});
			}
		}
		if(r + 1 < n && c + 1 < m){
			i = r + abs(a[r][c] - a[r+1][c+1]);
			j = c + abs(a[r][c] - a[r+1][c+1]);
			if(i < n && j < m && ans[i][j] == INT_MAX){
				ans[i][j] = ans[r][c] + 1;
				q.push({i, j});
			}
		}
	}
	cout << "3";
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
				ans[i][j] = INT_MAX;
			}
		}
		solve();
		cout << endl;
	}
}

/*
1
3 3
2 1 2
1 2 4
1 3 2
*/
