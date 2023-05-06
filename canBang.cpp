#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> can(12);
	for(int i=0; i<12; i++){
		cin >> can[i];
	}
	int min1 = 1e9;
	for(int i=0; i<8; i++){
		for(int j=i+1; j<9; j++){
			for(int k=j+1; k<10; k++){
				for(int l=k+1; l<11; l++){
					int sum1 = can[i]+can[j]+can[k];
					int sum2 = can[l]+can[11-i-j-k-l];
					int chenh = abs(sum1 - sum2);
					min1= min(min1, chenh);
				}
			}
		}
	}
	cout << min1 << endl;
}

/*
2 3 4 5 6 7 8 9 10 11 12 13
0 1 2 3 4 5 6 7 8  9  10 11
*/

