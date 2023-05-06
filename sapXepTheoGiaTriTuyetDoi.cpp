#include<bits/stdc++.h>
using namespace std;
//int main(){
//    int t;
//    cin >> t;
//    while (t--){
//        int n, k;
//        cin >> n >> k;
//        int a[n];
//        vector<pair<int, int>> v(n);
//        for (int i = 0; i < n; i++){
//            cin >> a[i];
//            v[i].first = abs(a[i] - k); //key
//            v[i].second = i; //value
//        }
//        sort(v.begin(), v.end());
//        for (int i = 0; i < n; i++)
//            cout << a[v[i].second] << " ";
//        cout << endl;
//    }
//}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            v[i].first = abs(a[i]-k);
            v[i].second = a[i];
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}
/*
2
5 7
10 5 3 9 2
5 6
1 2 3 4 5
*/
