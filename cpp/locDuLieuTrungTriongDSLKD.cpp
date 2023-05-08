#include<bits/stdc++.h>
using namespace std;

//ket qua dung nhung bi WA
//int main(){
//	int n, k; cin >> n;
//	int a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}
//	int dem=0;
//	sort(a, a+n);
//	cout << a[0] << " ";
//	for(int i=1; i<n; i++){
//		if(a[i]!=a[i-1]) cout << a[i] << " ";
//	}
//} 1 1 1 4  5 1 4  7 7 8 1 9
int main(){
	int n, x;
	cin >> n;
	int a[n];
	map<int, int> m;
	for(int i=0; i<n; i++){
		cin >> x;
		m[x]++;
		if(m[x]==1) cout << x << " ";
	}
}
//dung set
//int main(){
//	int n; cin >> n;
//	int a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}
//	set<int> se;
//	for(int i=0; i<n; i++){
//		se.insert(a[i]);
//	}
//	for(int x : se){
//		cout << x << " ";
//	}
//}
