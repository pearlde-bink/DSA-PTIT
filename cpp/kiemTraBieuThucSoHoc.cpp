#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){ 
		bool oke = false;
		stack<char> st;
		string s; getline(cin, s);
		for(int i=0; i<s.size(); i++){
			if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				st.push(s[i]);
			}
			if(s[i] == ')'){
				if(st.top() == '('){
					oke = true; break;
				}
				while(st.size() && st.top() != '('){
					st.pop();
				}
				st.pop();
			}
		}
		if(oke) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}

