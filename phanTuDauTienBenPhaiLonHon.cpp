#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n], b[n];
		for(int i=0; i<n; i++) cin >> a[i];
		stack<int> st;
		for(int i=n-1; i>=0; i--){
			while(!st.empty() && a[i]>=st.top()) st.pop();
			if(st.empty()) b[i] = -1;
			else b[i] = st.top();
			st.push(a[i]);
		}
		for(int i=0; i<n; i++)
			cout << b[i] << " ";
		cout << endl;
	}
}
/*
3
4
4 5 2 25
3
2 2 2
4
4 4 5 5
*/
