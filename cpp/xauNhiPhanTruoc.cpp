#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string n; cin >> n;
        int i=n.length()-1;
        while(n[i] == '0'){
        	n[i]='1';
        	i--;
		}
		if(i>=0)  n[i]='0';
		cout << n << endl;
    }
}
