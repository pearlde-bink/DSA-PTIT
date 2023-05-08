#include <bits/stdc++.h>
using namespace std;

int convertMax(string a){
	int a1;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='5'){
            a[i]='6';
        }
    }
	a1 = stoi(a);
	return a1;
}

int convertMin(string a){
	int a1;
    for(int i=a.size()-1; i>=0; i--){
        if(a[i]=='6'){
            a[i]='5';
        }
    }
	a1 = stoi(a);
	return a1;
}

int main(){
    string a, b; cin >> a >> b;
    int a1, a2, b1, b2;
	  a1 = convertMax(a);
	  a2 = convertMin(a);
	  b1 = convertMax(b);
	  b2 = convertMin(b);
    cout << a2+b2 << " " << a1+b1;
}


