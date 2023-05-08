#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int v, e; cin >> v >> e;
        vector<int> ke[v+1];
        // ke.clear();
        for(int i=0; i<e; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int u = 1; u <= v; u++){
            cout << u << ": ";
            for(int v = 0; v < ke[u].size(); v++){
                cout << ke[u][v] << " ";
            }
            cout << endl;
        }
    }
}
/*
1
6  9
1  2
1  3 
2  3
2  5
3  4
3  5
4  5
4  6
5  6
*/
