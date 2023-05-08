#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		string a[n];
		for(int i=0; i<n; i++) a[i] = "-1";
		stack<int> st;
		for(int i=0; i<n; i++){
			if(s[i] == '(') 
				st.push(i);
			else if(s[i] == ')' and !st.empty()){
				a[i] = "1";
				a[st.top()] = "0";
				st.pop();
			}
			else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || isalpha(s[i]))
				a[i] = string(1, s[i]);
		}
		for(int i=0; i<n; i++)
			cout << a[i];
		cout << endl;
	}
}

/*
3
((a)
(a))
(((abc))((d)))))
*/
