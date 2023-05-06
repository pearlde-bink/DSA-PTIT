#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	deque<int> dq;
	string s; int n;
	while(t--){
		cin >> s;
		if(s == "PUSHFRONT"){
			cin >> n;
			dq.push_front(n);
		}
		if(s == "PRINTFRONT"){
			if(!dq.empty()) cout << dq.front() << endl;
			else cout << "NONE" << endl;
		}
		if(s == "POPFRONT"){
			if(!dq.empty()) dq.pop_front();
			else continue;
		}
		if(s == "PUSHBACK"){
			cin >> n;
			dq.push_back(n);
		}
		if(s == "PRINTBACK"){
			if(!dq.empty()) cout << dq.back() << endl;
			else cout << "NONE" << endl;
		}
		if(s == "POPBACK"){
			if(!dq.empty()) dq.pop_back();
			else continue;
		}
	}
}

