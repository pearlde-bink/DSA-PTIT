#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<pair<int, int>> m(n);
	    for(int i=0; i<n; i++){
	    	cin >> m[i].second >> m[i].first;
		}
		sort(m.begin(), m.end());
		int dem = 0;
		int cuoi = 0;
		for(int i=0; i<n; i++){
			if(m[i].second >= cuoi){
				dem++;
				cuoi = m[i].first;
			}
		}
		cout << dem << endl;
	}
}

/*
1
6
5 9
1 2
3 4
0 6
5 7
8 9
*/
