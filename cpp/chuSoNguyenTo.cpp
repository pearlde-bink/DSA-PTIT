#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int s[4];
	s[1] = 2; s[2] = 3; s[3] = 5; s[4] = 7;
	while(1){
		for(int i=1; i<=4; i++){
			if(s[4] != 2) cout << s[i];
		}
		cout << endl;
		int oke = 0;
		for(int i = 4 - 1; i>=1; i--){
			if(s[i] < s[i+1]){
				oke = 1;
				sort(s + i + 1, s + 4 + 1);
				for(int j = i+1; j<=4; j++){
					if(s[j] > s[i]){
						swap(s[j], s[i]);
						break;
					}
				}
				break;
			}
		}
		if(oke == 0) break;
	}
}
