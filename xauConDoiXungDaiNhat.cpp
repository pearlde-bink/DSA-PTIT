#include <bits/stdc++.h>
using namespace std;
int result = 1;

int bestVal(string s){
    int n = s.length();
    int a[n][n];
    memset(a, 0, sizeof(a));
    for(int i=1; i<=n; i++){
        a[i][i]=1;
    }
    for(int i=1; i<=n-1; i++){
        if(s[i]=s[i+1]){
            a[i][i+1] = 1;
            result = max(result, )
        }
    }
    for(int k=3; k<=n; k++){
        for(int i=0; i<=n-k+i; i++){
            int j = i + k;
            if(s[i] == s[j])
            a[i][j] = a[i+1][j-1];
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        
    }
}
