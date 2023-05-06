#include<bits/stdc++.h>
using namespace std;

void daoTu(string s){
	string a="";
	stack <char> st;
	for(int i=0; i<s.size(); i++){
		st.push(s[i]);
	}
	while(!st.empty()){
		char b = st.top();
		a+=b;
		st.pop();
	}
	cout << a << " ";
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin, s);
		string b = "";
		vector<string> v;
		v.clear();
		
		for(int i = 0; i < s.size(); i++){
			if(s[i] != ' ') b+=s[i];
			else {
				v.push_back(b);
				b = "";
			}		
		}
		
		if(!b.empty()) v.push_back(b);
		
		for(int i = 0; i < v.size(); i++){
			daoTu(v[i]);
		}
		cout << endl;
	}
}
