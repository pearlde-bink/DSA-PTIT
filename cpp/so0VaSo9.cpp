#include<bits/stdc++.h>
using namespace std;

vector<string> res;

void init(){
	queue<string> q;
	q.push("9");
	res.push_back("9");
	while(res.size() < 10000){
		string top = q.front();
		q.pop();
		res.push_back(top + "0");
		res.push_back(top + "9");
		q.push(top + "0");
		q.push(top + "9");
	}
}

int main(){
	init();
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int n; cin >> n;
		for(int i=0; i<10000; i++){
			if(stoi(res[i]) % n == 0){
				cout << res[i];
				break;
			}
		}
		cout << endl;
	}
}
/*

*/
