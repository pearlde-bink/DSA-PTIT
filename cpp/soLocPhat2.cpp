#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void init(){
	queue<string> q;
	q.push("6"); q.push("8");
	v.push_back("6"); v.push_back("8");
	while(1){
		string top = q.front();
		q.pop();
		if(top.length() == 15) break;
		q.push(top + "6"); q.push(top + "8");
		v.push_back(top + "6"); v.push_back(top + "8");
	}
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> tmp;
		for(auto x : v){
			if(x.length() == n+1) break;
			else tmp.push_back(x);
		}
		cout << tmp.size() << endl;
		for(auto x : tmp){
			cout << x << " ";
		}
		cout << endl;
	}
}
