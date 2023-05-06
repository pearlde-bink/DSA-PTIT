#include <iostream>
#include <algorithm>
using namespace std;

void hoanVi(string s, int used[], int i){
	for(int j=1; j<=s.length(); j++){
		if(!used[j]){
			s[i]=j;
			used[j]=1;
			if(i == s.length()-1){
				for(int k=0; k<s.length(); k++) cout << s[k];
				cout << " ";
			} else hoanVi(s, used, i+1);
			used[j]=0;
		}
	}
}
int main(){
    int t; cin >> t;
    while(t--){
    	string s; cin >> s;
//    	hoanVi(s, used, );
//    	cout << endl;
		int l = s.length();
		bool oke = true;
		while(oke){
			for(int i=0; i<l; i++) cout << s[i];
			cout << " ";
			int i=l-2;
			while(i>=0 && s[i]>s[i+1]) i--;
			if(i>=0){
				int j=l-1;
				while(s[j]<s[i]) j--;
				swap(s[j], s[i]);
				int r = i+1, x=l-1;
				while(r<=x){
					swap(s[r], s[x]);
					r++; x--;
				}
			} else oke = false;
		}
		cout << endl;
	}
}
