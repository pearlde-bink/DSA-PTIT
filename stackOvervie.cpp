#include<bits/stdc++.h>
using namespace std;

int main(){
	//chuyen doi nhi phan
	/*stack<int> st;
	int n; cin >> n;
	while(n>0){
		int b = n%2;
		st.push(b);
		n/=2;
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}*/
	
	//chuyen nguoc cau
	/*stack<string> st;
	string s; cin.ignore();
	getline(cin, s);
	stringstream ss(s);
	string token;
	while(ss >> token){
		st.push(token);
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;*/
	
	//kiem tra day ngoac hop le
	string s;
	cin >> s;
	stack<char> st;
	for(int i=0; i<s.size();i++){
		if(s[i] == '(') st.push(s[i]);
		else st.pop();
	}
	if(st.empty()) cout << "YES" << endl;
	else cout << "NO";
}

