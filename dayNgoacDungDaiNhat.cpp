#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){ 
		string s; cin >> s;
		stack<int> st;
		st.push(-1);
		int cnt = 0;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '('){
				st.push(i);
			}
			else{
				st.pop();
				if(!st.empty()){
					cnt = max(cnt, i - st.top());
				}
				else st.push(i);
			}
		}
		cout << cnt << endl;
	}
}

