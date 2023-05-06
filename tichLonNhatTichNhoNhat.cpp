#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i=0; i<n; i++)  cin >> a[i];
		for(int i=0; i<m; i++)  cin >> b[i];
//		sort(a, a+n, greater<int>());
		sort(a, a+n, cmp);
		sort(b, b+m);
		cout << (long long)a[0]*b[0] << endl;
		
		/*long long multi = 1;
		//dung ham min_element (max)
		multi = (*max_element(a, a+n)) * (*min_element(b, b+m));
		cout << multi << endl;*/
	}
}
/*
2
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6
1 4 2 3 10 2
4 2 6 5 2 9
*/
