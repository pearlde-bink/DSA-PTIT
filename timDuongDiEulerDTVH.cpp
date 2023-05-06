#include <bits/stdc++.h>
using namespace std;
int check[100][100] = {0};
int a[100][100] = {0}, n;
set<int> adj[1000];

void danhSachKe(){
	for(int i = 1; i <= n; i++){
		set<int> st;
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1) st.insert(j);
		}
		adj[i] = st;
		st.clear();
	}
}

void duong_di(int u){
	stack<int> st;
	vector<int> ec;
	st.push(u);
	while(!st.empty()){
		int v = st.top();
		if(adj[v].size() != 0){
			int y = *adj[v].begin();
			st.push(y);
			adj[v].erase(y);
			adj[y].erase(v);
		}else{
			st.pop();
			ec.push_back(v);
		}		
	}
	reverse(ec.begin(), ec.end());
	for(int i = 0; i < ec.size(); i++) cout << ec[i] << " ";
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	int dem=0;
	int u;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j]==1) dem++;
		}
		if(dem%2==1){
			u=i;
			break;
		}
	}
	danhSachKe();
	duong_di(u);
}
