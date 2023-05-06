#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stack<int> st;
		vector<int> v;
		int cnt = 0;
		for(int i = 0; i<s.size(); i++){
			if(s[i] == '('){
				cnt++;
				st.push(cnt); v.push_back(cnt);
			}
			else if(s[i] == ')'){
				v.push_back(st.top());
				st.pop();
			}
		}
		for(int i = 0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
