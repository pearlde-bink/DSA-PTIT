#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<pair<int, int>> v;
    	int s[n], f[n];
    	for(int i=0; i<n; i++) cin >> s[i];
    	for(int i=0; i<n; i++) cin >> f[i];
    	for(int i=0; i<n; i++){
    		v.push_back({s[i], f[i]});
		}
		sort(v.begin(), v.end(), cmp);
		int cnt = 1;
		int time = v[0].second;
		for(int i=1; i<v.size(); i++){
			if(v[i].first >= time){
				cnt++;
				time = v[i].second;
			}
		}
		cout << cnt << endl;
	}
}



