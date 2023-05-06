#include<bits/stdc++.h>
using namespace std;

bool cmp2(int a, int b){
	return a>b;
}

int main(){
	int n; cin >> n;
	int a[n];
	int ind1=0, ind2=0;
	for(int i=1; i<=n; i++) cin >> a[i];
	vector<int> c, l;
	for(int i=1; i<=n; i++){
		if(i%2==0) c.push_back(a[i]);
		else l.push_back(a[i]);
	}
	sort(l.begin(), l.end());
	sort(c.begin(), c.end(), cmp2);
	for(int i=1; i<=n; i++){
		if (i % 2 == 0) cout << c[ind1++] << " ";
		else cout << l[ind2++] << " ";
	}
}

//5 4 8 7 2 1 9
//le: 5 8 2 9 => 2 5 8 9
//chan: 4 7 1 => 7 4 1
//1 2 3 4 5 6 7 
//2 7 5 4 8 1 9

