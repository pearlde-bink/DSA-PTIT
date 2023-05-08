#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i=1; i<=n; i++) a[i]=i;
		while(1){
			for(int i=1; i<=n; i++) cout << a[i];
			cout << " ";
			int oke = 0;
			for(int i=n-1; i>0; i--){
				if(a[i] < a[i+1]){
					oke = 1;
					sort(a+i+1, a+n+1);
					for(int j=i+1; j<=n; j++){
						if(a[j] > a[i]){
							swap(a[i], a[j]);
							break;
						}
					}
					break;
				}
			}
			if(oke == 0) break;
		}
		cout << endl;
	}
}
//sinh Hoan vi
/*
#include <bits/stdc++.h>
using namespace std;
int n, a[100], used[100];

void inkq(){
	for(int i=1; i<=n; i++)
		cout << a[i];
	cout << endl;
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(used(j)==0){
			a[i]=j;
			used[j]=1;
			if(i==n) inkq();
			else Try(i+1);
			used[j]=0;
		}
	}		
}

int main(){
	cin >> n;
	Try(1);
}
*/
