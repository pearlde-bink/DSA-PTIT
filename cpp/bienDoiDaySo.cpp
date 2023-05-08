#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		multimap<int, int> ma;
		for(int i=0; i<n; i++){
			cin >> a[n] >> b[n];
			ma.insert({b[i], a[i]});
		}
		int dem = 0;
		for(auto i=ma.begin(); i!=ma.end(); i++){
			for(auto j=next(i); j!=ma.end(); j++){
				if(i->second == j->second){
					dem+=i->first;
					ma.erase(j->first);
				}
			}
		}
//		for(auto i : ma){
//			cout << i.first << " " << i.second << endl;
//		}
		cout << dem << endl;
	}
} 

/*
3
3
2 4
2 1
3 5
3
2 3
2 10
2 6
4
1 7
3 3
2 6
1000000000 2
*/

