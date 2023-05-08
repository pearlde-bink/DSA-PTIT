#include<bits/stdc++.h>
#pragma gcc
using namespace std;
using ll = long long;

ll n, m;
vector<pair<ll, ll>> min1[1000005];
ll duong[1000005];
ll d[1000005];

void dijkstra(ll i){
	fill(d+1, d+n+1, 1e18);
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll> >> pq;
	d[i] =0;
	pq.push({d[i], i});
	duong[i] = 1;
	while(!pq.empty()){
		auto top = pq.top();
		pq.pop();
		ll u = top.second;
		ll du = top.first;
		if(du > d[u]) continue;
		for(auto &x : min1[u]){
			ll v = x.first;
			ll w = x.second;
			if(d[v] ==  d[u] + w){
				duong[v] += duong[u];
			}
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				duong[v] = duong[u];
				pq.push({d[v], v});
			}
		}
	}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		ll x, y, c;
		cin >> x >> y >> c;
		min1[x].push_back({y, c});
		min1[y].push_back({x, c});
	}
	dijkstra(1);
	cout << d[n] << " " << duong[n] << endl;
}

/*
5 6
1 2 6
1 3 7
2 4 2
3 4 9
3 5 3
4 5 2
*/
