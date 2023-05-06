#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> a(k+1);
		vector<vector<int>> v;
		for(int i=1; i<=k; i++) a[i]=i;
		v.push_back(a);
		while(1){
			v.push_back(a);	
			int ok = 0;
			for(int i=k; i>=1; i--){
				if(a[i]!=n-k+i){
					ok = 1;
					a[i]++;
					for(int j=i+1; j<=k; j++){
						a[j] = a[j-1]+1;
					}
					break;
				}
			}
			if(ok == 0) break;
		}
		for(int i=v.size()-1; i>=1; i--){
			for(int j=1; j<=k; j++){
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}
}

