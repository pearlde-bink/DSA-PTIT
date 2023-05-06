#include <bits/stdc++.h>
using namespace std;
int n; 

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        string s; cin >> s;
        int b[30] = {};
        for(int i=0; i<s.size(); i++){
        	b[s[i] - 'A']++;
		}
		int max1 = 0;
		for(int i=0; i<30; i++){
			max1 = max(max1, b[i]);
		}
		if(max1 * d > s.size()+1) cout << -1 << endl;
		else cout << 1 << endl;
    }
}

/*
2
2
ABB
2
AAA
*/
