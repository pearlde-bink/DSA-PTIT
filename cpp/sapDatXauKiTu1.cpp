#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a[30] = {}, max1 = 0;
        //count occurrence of each character
        for(int i = 0; i <= s.size(); i++){
            a[s[i] - 'a']++;
        }
        //find max value's occurrence
        for(int i = 0; i < 20; i++){
            max1 = max(max1, a[i]);
        }
        if(max1 * 2 > s.size() + 1) cout << -1 << endl;
        else cout << 1 << endl;
    }
}

/*
3
geeksforgeeks
bbbabaaacd
bbbbb
*/
