#include<bits/stdc++.h>
using namespace std;

int n;

class uuThe{
	public:
		string str;
		int tam;
		uuThe(string s, int c){
			str = s;
			tam = c;
		}
};

void solve(){
	queue<uuThe> q;
	vector<string> ans;
	q.push(uuThe("", 0));
	while(ans.size() != n){
		string str = q.front().str;
		int tam = q.front().tam;
		q.pop();
		if(str[0] == '0') continue;
		if(tam * 2 > str.length()) ans.push_back(str);
		q.push(uuThe(str + '0', tam));
		q.push(uuThe(str + '1', tam));
		q.push(uuThe(str + '2', tam + 1));
	}
	for(int i=0; i<n; i++){
		cout << ans[i] << " ";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		solve();
		cout << endl;
	}
}

/*
2
5
10
*/
