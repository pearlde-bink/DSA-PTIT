#include<iostream>
using namespace std;
bool check(string a){
	if(a[0]!='8' || a[a.size()-1]!='6') return 0;
	for(int i=0; i<a.size()-1; i++){
		if(a[i]=='8' && a[i+1]=='8') return 0;
	}
	for(int i=0; i<a.size()-4; i++){
		if(a[i]=='6' && a[i+1]=='6' && a[i+2]=='6' && a[i+3]=='6') return 0;
	}
	return 1;
}
int main(){
	int n; cin >> n;
	if(n<6 || n>=16) return 0;
	else{
		string a="";
		for(int i=0; i<n; i++) a+='6';
		bool oke = true;
		while(oke){
			if(check(a)) cout << a << endl;
			int i = n-1;
			while(i>=0 && a[i]=='8'){
				a[i]='6';
				i--;
			}
			if(i>=0) a[i]='8';
			else oke = false;
		}
	}
}
/*
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
void Try(string s){
    int k = s.size();
    if (n == k) {
        if (s[n - 1] == '6') cout << s << endl;
        return;
    }
    if (s[k - 1] == '8') Try(s + "6");
    else {
        if (k < 4) Try(s + "6");
        else if (s[k - 2] == '8' || s[k - 3] == '8')
            Try(s + "6");
        Try(s + "8");
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    Try("8");
}
*/
