#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(s[i]);
			else if(s[i] == ')' && !st.empty() && st.top() == '(') st.pop();
			
			if(s[i]=='[') st.push(s[i]);
			else if(s[i] == ']' && !st.empty() && st.top() == '[') st.pop();
			
			if(s[i]=='{') st.push(s[i]);
			else if(s[i] == '}' && !st.empty() && st.top() == '{') st.pop();
		}
		if(st.empty()) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

//c2 dung map
/*string s; cin >> s;
map<int, int> m = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
bool dx = true;
stack<char> st;
for(int i=0; i<s.size(); i++){
	if(s[i] =='(' || s[i] == '[' || s[i] == '{'){
		st.push(s[i]);
	}
	else{
		if(st.empty() || m[st.top()] != s[i]){
			dx = false;
			break;
		}
		st.pop();
	}
}

if(st.empty() && dx) cout << "YES";
else cout << "NO"; 
cout << endl; */

/*
2
[()]{}{[()()]()}
[(])
*/
