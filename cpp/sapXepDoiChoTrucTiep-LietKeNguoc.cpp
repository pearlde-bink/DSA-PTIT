#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
	while(t--){
		int n, i, j; cin >> n;
		int b = n - 1;
		vector<int> a(n);
		stack<vector<int>> st;
		for(i = 0; i < n; i++) cin >> a[i];
		for(i = 0; i < n - 1; i++){
			for(j = i + 1; j < n; j++){
				if (a[i] > a[j]) swap(a[i], a[j]);
			}
			st.push(a);
		}
		while(st.size()){
			a = st.top();
			st.pop();
			cout << "Buoc " << b-- << ": ";
			for (j = 0; j < n; j++) cout << a[j] << " ";
			cout << endl;
		}
	}
}
/*
1
6
5 8 3 9 1 4
*/
