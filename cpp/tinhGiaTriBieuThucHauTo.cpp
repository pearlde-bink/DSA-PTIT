#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if(isdigit(s[i])) st.push(s[i]-'0');
			else{
				if(st.size() < 2){
                    return 0;
                }
				int a = st.top(); st.pop();
				int b = st.top(); st.pop();
				if(s[i] == '+') st.push(a+b);
				else if(s[i] == '-') st.push(b-a);
				else if(s[i] == '*') st.push(a*b);
				else st.push(b/a);
			}
			if(i == s.size()-1 && !st.empty()){
                cout << st.top() << endl;
            }
		}
	}
}
/*
2
231*+9-
875*+9-
*/
