#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<char> st;
	string s; cin >> s;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '(' || s[i] == '[') st.push(s[i]);
		else if(s[i] == ')'){
			if(st.top() == '(') st.pop();
			else if(st.top() == '[') break;
		}
		else if(s[i] == ']'){
			if(st.top() == '['){
				cnt++;
				st.pop();
			}
			else if(st.top() == '(') break;
		}
	}
	cout << cnt << endl;
}
