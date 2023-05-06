#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	string a,b; cin >> a >> b;
    	int c[a.size()+1][b.size()+1];
    	memset(c, 0, sizeof(c));
    	int max1 = 0;
    	for(int i=0; i<a.size(); i++){
    		for(int j=0; j<b.size(); j++){
    			if(a[i]==b[j]) 
					c[i+1][j+1] = c[i][j] +1;
    			else 
					c[i+1][j+1] = max(c[i][j+1], c[i+1][j]);
			}
		}
		cout << c[a.size()][b.size()] << endl;
	}
}

/*
2
AGGTAB
GXTXAYB
AA
BB
*/
