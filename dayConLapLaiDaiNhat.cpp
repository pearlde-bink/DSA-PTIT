#include <bits/stdc++.h>
using namespace std;

int solve(string str){
	int n = str.length();
	int dp[n+1][n+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			dp[i][j] = 0;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(str[i-1] == str[j-1] && i!=j){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
		}
	}
	string res="";
	int i = n, j = n;
	while(i>0 && j>0){
		if(dp[i][j] == dp[i-1][j-1]+1){
			res = res + str[i-1];
			i--;
			j--;
		}
		else if(dp[i][j] == dp[i-1][j]) i--;
		else j--;
	}
	return res.size();
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		string str; cin >> str;
		cout << solve(str) << endl;
	}
}

/*
2
3
abc
5
axxxy
*/

