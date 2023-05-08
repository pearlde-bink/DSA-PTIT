#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
vector<int> ve;
vector<vector<int>> g;

void BFS(int u){
	queue<int> q;
	q.push(u);
	ve[u] = true;
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(int w : g[u]){
			if(!ve[w]){
				q.push(w);
				ve[v] = true;
			}
		}
	}
}

void inkq(){
	cin >> V >> E;
	g.assign(V+1, {});
	while(E--){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans = 0, lthong = V;
	for(int i=1; i<=V; i++){
		int cnt = 0;
		ve.assign(V+1, false);
//		ve[i] = true;
		BFS(i);
		for(int j=1; j<=V; j++){
			if(!ve[j]){
				BFS(j);
				cnt++;
			}
		}
		if(cnt < lthong){
			lthong = cnt;
			ans = i;
		}
	}
	if(lthong == 1){
		cout << 0;
	}
	else cout << ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		inkq();
		cout << endl;
	}
}

/*
2
5 5
1 2
1 3
2 3
3 4
3 5
5 7
1 2
1 3
2 3
2 5
3 4
3 5
4 5
*/
