#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, i, j; cin >> n;
	vector<int> a(n);
	stack<vector<int>> st;
	int b=n-1;
	for(i=0; i<n; i++) cin >> a[i];
	for(i=0; i<n; i++){
		int k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
		st.push(a);
	}
	while(st.size()){
		a = st.top();
		st.pop();
		cout << "Buoc " << b-- << ": ";
		for(i=0; i<=b+1; i++) cout << a[i] << " ";
		cout << endl;
	}
}
/*
6
5 8 3 9 1 4
*/
// Xai De quy
//int n, a[100];
//void insertionSort(int i){
//	int b[100];
//	if(i<=n){
//		int k=a[i];
//		int j=i-1;
//		for(int k=0; k<i; k++) b[k]=a[k];
//		while(j>=0 && a[j]>k){
//			a[j+1]=a[j];
//			j--;
//		}
//		a[j+1]=k;
//		insertionSort(i+1);
//	}
//	if(i<=n){
//		cout << "Buoc " << i-1 << ": ";
//		for(int k=0; k<i; k++) cout << b[k] << " ";
//		cout << endl;
//	}
//}
//
//int main(){
//	cin >> n;
//	for(int i=0; i<n; i++) cin >> a[i];
//	insertionSort(1);
//}
