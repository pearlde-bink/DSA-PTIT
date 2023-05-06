#include<bits/stdc++.h>
using namespace std;

int prior(char c){
	if(c == '+' || c == '-') return 1;
	else if(c == '*' || c == '/') return 2;
	else if(c == '^') return 3;
	return -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		stack<char> st;
		string p = "";
		string s; cin >> s;
		
		for(int i=0; i<s.size(); i++){
			if(s[i] == '(') st.push(s[i]);
			else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
				p += s[i];
			else if(s[i] == ')'){
				while(!st.empty() && st.top() != '('){
					char y = st.top();
					st.pop();
					p += y;
				}
				if(st.top() == '(') st.pop();
			}
			else{
				while(!st.empty() && prior(s[i]) <= prior(st.top())) {
					char y = st.top();
					st.pop();
					p += y;
				}
				st.push(s[i]);
			}
		}
		
		while(!st.empty() && st.top()!='('){
			char y = st.top(); st.pop();
			p += y;
		}
		cout << p << endl;
	}
}


