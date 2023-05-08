#include<bits/stdc++.h>
using namespace std;

void BFS(int u, vector<int>& daxet, vector<vector<int>>& dslt){
	queue<int> q;
	daxet[u] = 1;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int w : dslt[v]){
			if(!daxet[w]){
				daxet[w] = 1;
				q.push(w);
			}
		}
	}
}

void inkq(int x, int n, vector<vector<int>>& dslt){
	vector<int> daxet(n, 0);
	BFS(x, daxet, dslt);
	for(int i=0; i<n; i++){
		if(!daxet[i]){
			cout << i << endl;
		}
	}
} 

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	vector<vector<int>> dslt(n);
	for(int i=0 ; i<m; i++){
		int u, v;
		cin >> u >> v;
		dslt[u].push_back(v);
		dslt[v].push_back(u);
	}
//	inkq(x, n, dslt);
}

/*
6 4 2
1 3
2 3
1 2
4 5
*/
