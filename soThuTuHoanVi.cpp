#include <bits/stdc++.h>
using namespace std;
int n; 
int a[20], b[20];

bool assemble(){
	for(int i=0; i<n; i++)
		if(a[i]!=b[i]) return 0;
	return 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        cin >> n;
        bool oke = true;
        int dem = 0;
        for(int i = 0; i < n; i++){
        	a[i] = i+1;
        	cin >> b[i];
		} 
		while(++dem){
			if(assemble()) {
				cout << dem << endl;
				break;
			}
			//khi kiem tra stt thi khong can vong lap de lap cac hoan vi
			//chi can tim cac hoan vi tiep theo de so sanh
        	int i = n-2;
        	while(i>=0 && a[i]>a[i+1]) i--;
			if(i>=0){
				int j = n - 1;
				while(a[i] > a[j]) j--;
				swap(a[i], a[j]);
				int r = i+1, s = n-1;
				while(r<=s){
					swap(a[r], a[s]);
					r++; s--;
				}
			}
		}
        
    }
}
