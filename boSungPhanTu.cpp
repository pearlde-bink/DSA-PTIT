#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++)  cin >> a[i];
		sort(a, a+n);
		int dem=0;
		for(int i=0; i<n; i++){
			int dis = a[i+1]-a[i];
			if(dis>1){
				dem+=(dis-1);
			}
		}
		cout << dem << endl;
	}
}
/*
2
5
4 5 3 8 6
3
2 1 3
*/

