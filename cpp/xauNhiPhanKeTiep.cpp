#include<bits/stdc++.h>
using namespace std;
string b;

bool next(){
    int n=b.size()-1;
    int i;
    for(i=n; i>0; i--){
    	if(b[i]=='0'){
    		b[i]='1';
			break;	
		}
		else {
			b[i]='0';
		}	
	}
	if(i<0) return false;
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> b;
	    if(next()) cout << b << endl;
	}
}
