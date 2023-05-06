#include<bits/stdc++.h>
using namespace std;

//code nay run dung testcase ma submit WA
//vector<string> v;
//
//void init(){
//	queue<string> q;
//	q.push("1");
//	v.push_back("1");
//	while(v.size() < 20000){
//		string top = q.front();
//		q.pop();
//		q.push(top + "0"); q.push(top + "1");
//		v.push_back(top + "0"); v.push_back(top + "1");
//	}
//}
//
//int main(){
//	init();
//	queue<string> q; int n;
//	int t; cin >> t;
//	while(t--){
//		cin >> n;
//		for(int i = 0; i < v.size(); i++){
//			if(stoll(v[i]) % n == 0){
//				cout << stoll(v[i]) << endl;
//				break;
//			}
//		}
//	}
//}

int main(){
	int t; cin >> t;
	while(t--){
		long long n, k; cin >> n;
		queue<long long> q;
		q.push(1);
		while(q.size()){
			k = q.front();
			if(k % n == 0){
				cout << k << endl;
				break;
			}
			q.pop();
			q.push(k * 10);
			q.push(k * 10 + 1);
		}
	}
}






