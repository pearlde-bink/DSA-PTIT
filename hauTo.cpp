#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		stack<int> st;
		int n; cin >> n;
		string s[n];
		for(int i=0; i<n; i++){
			cin >> s[i];
		}
		for(int i=0; i<n; i++){
			if(s[i] != "+" && s[i] != "-" && s[i] != "*" && s[i] != "/") st.push(stoi(s[i]));
			else{
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				if(s[i] == "+") st.push(a + b);
				else if(s[i] == "-") st.push(b - a);
				else if(s[i] == "*") st.push(a*b);
				else if(s[i] == "/") st.push(b / a);
			}
				
//			}
		}
		cout << st.top() << endl;
	}
}
