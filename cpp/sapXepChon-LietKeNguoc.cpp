#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, i, j; cin >> n;
	vector<int> a(n);
	for(i=0; i<n; i++) cin >> a[i];
	stack<vector<int>> st;
	int b=n-1;
	for(i=0; i<n-1; i++){
		int min=i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[min]) min=j;
		}
		if(min!=i) swap(a[i], a[min]);
		st.push(a);
	}
	while(st.size()){
		a=st.top();
		st.pop();
		cout << "Buoc " << b-- << ": ";
		for(i=0; i<n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
/*
6
5 8 3 9 1 4
*/
