#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; string s;
	stack<int> st;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			st.push(n);
		}
		else if(s == "pop"){
			st.pop();
		}
		else if(s == "show"){
			if(st.size() != 0){
				stack<int> st2;
				while(!st.empty()){
					st2.push(st.top());
					st.pop();
				}
				while(!st2.empty()){
					cout << st2.top() << " ";
					st.push(st2.top());
					st2.pop();
				}
				cout << endl;
			}
			else cout << "empty";
		}
	}
}


