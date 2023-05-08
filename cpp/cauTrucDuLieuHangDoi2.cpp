#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	queue<int> q;
	string s;
	while(t--){ 
		cin >> s;
		if(s == "PUSH"){
			int n; cin >> n;
			q.push(n);
		}
		else if(s == "POP"){
			if(!q.empty()) q.pop();
		}
		else if(s == "PRINTFRONT"){
			if(!q.empty()) cout << q.front() << endl;
			else cout << "NONE" << endl;
		}
	}
}
/*
9
PUSH 1
PUSH 2
POP
PRINTFRONT
PUSH 3
PRINTFRONT
POP
POP
PRINTFRONT
*/
