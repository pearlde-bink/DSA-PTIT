//khong hieu sao code nay chay sai (code giong trong giao trinh)
/*#include <bits/stdc++.h>
using namespace std;
int n, a[100][100];
int lienThong(void) {
	int sum, d=0;
    for(int i=0; i<n; i++){
    	sum = 0;
    	for(int j=0; j<n; j++) sum+=a[i][j];
		if(sum%2) d++;
	}
	if(d>0) return 0;
	return 1;
}
void eulerCycle(int u){
	int v, x, top, dCE;
	int stack[100], ce[100];
	top=1; stack[top]=u; dCE=0;
	do{
		v = stack[top], x = 1;
		while(x<=n && a[v][x]==0) x++;
		if(x>n){
			dCE++;
			ce[dCE] = v;
			top--;
		} else{
			top++;
			stack[top] = x;
			a[v][x]=0; a[x][v]=0;
		}
	} while(top!=0);
	for(x=dCE; x>0; x--) cout << ce[x] << " ";
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int k; cin >> k;
	if(lienThong()) eulerCycle(k);
}
*/
#include <bits/stdc++.h>
using namespace std;
int check[100][100] = {0};
int a[100][100] = {0}, n;
set<int> adj[1000];
void chuyen_doi(){
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
void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

int main(){
	nhap();
	int u; cin >> u;
	chuyen_doi();
	duong_di(u);
}
/*
7
0	0	1	0	0	1	0
0	0	0	1	1	1	1
1	0	0	1	0	1	1
0	1	1	0	1	0	1
0	1	0	1	0	0	0
1	1	1	0	0	0	1
0	1	1	1	0	1	0
1
*/

