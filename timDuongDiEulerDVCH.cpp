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
	int u=0;
	for(int i = 1; i <= n; i++){
		int bbr=0, bbv=0;
		for(int j = 1; j <= n; j++){
			if(a[i][j]==1) bbr++;
			if(a[j][i]==1) bbv++;
		}
		if(abs(bbr-bbv)==1){
			u=i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
        int bbv = 0, bbr = 0;
        for (int j = 0; j < n; j++) {
            if (a[j][i] == 1) {
                bbv++;
            }
            if (a[i][j] == 1) {
                bbr++;
            }
        }
        if(abs(bbr-bbv)==1) count1++;
        else if(abs(bbr-bbv)==0) count2++;
        if(count1==2 && count2==(n-2)){
            cout << "La do thi nua Euler";
            break;
        }
    }
    if(count1!=2 || count2!=(n-2)) cout << "Khong phai do thi nua Euler" << endl;
	danhSachKe();
	if(u) duong_di(u);
	else cout <<"Khong co duong di Euler";
	
}
