#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][n];
        vector<int> v;
        int sum = 0;
        for(int i=0; i<n; i++){
        	for(int j=0; j<n; j++){
        		cin >> a[i][j];
        	}
		}
		
		int first = 0, k = 0;
		for(int i=0; i<n; i++){
			first = max(first, a[0][i]);
			//k = i;
			v.push_back(i);
		}
		sum += first;
		
		for(int i=1; i<n; i++){
			int between = 0;
        	for(int j=0; j<n-1; j++){
        		for(int m=0; m<v.size(); m++){
        			if(j == v[m]) continue;
	        		between = a[i][j];
	        		if(a[i][j+1] > between){
	        			//k = j+1;
	        			v.push_back(j+1);
						between = a[i][j+1];
					}
				}
        	}
			sum += between;
		}
		cout << sum << endl;
    }
}

/*
2
3
3 1 2
1 1 2
1 4 2
2
1 2
2 1
*/
