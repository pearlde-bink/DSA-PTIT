#include<bits/stdc++.h>
using namespace std;

/*testcase dung nhung bi WA

vector<string> v;

void init(){
	queue<string> q;
	q.push("1");
	v.push_back("1");
	while(v.size() < 100000){
		string top = q.front();
		q.pop();
		v.push_back(top + "0"); 
		v.push_back(top + "1");
		q.push(top + "0");
		q.push(top + "1");
	}
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		unsigned long long n; cin >> n;
		int cnt = 0;
		for(int i=0; i<v.size(); i++){
			if(stoll(v[i]) <= n) cnt++;
			else break;
		}
		cout << cnt << endl;
	}
}*/

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		vector<int> a;
		while(n){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(), a.end());
		int vt = a.size();
		for(int i=0; i<a.size(); i++){
			if(a[i] >= 2){
				vt = i;
				break;
			}
		}
		for(int i = vt; i<a.size(); i++){
			a[i] = 1;
		}
		long long s = 1;
		long long kq = 0;
		for(int i = a.size()-1; i>=0; i--){
			kq += a[i] * s;
			s*=2;
		}
		cout << kq << endl;
	}
}



