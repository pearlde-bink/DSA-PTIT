#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long s=0;
		int a[n];
		priority_queue<int, vector<int>, greater<int>> q;
		for(int i=0; i<n; i++){
			cin >> a[i];
			q.push(a[i]);
		} 
		while(q.size()>1){
			int s1 = q.top();
			q.pop();
			int s2 = q.top();
			q.pop();
			int k = s1 +s2;
			s += k;
			q.push(k);
		}
		cout << s << endl;
	}
}
