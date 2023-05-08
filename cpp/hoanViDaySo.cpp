#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    bool oke = true;
    while(oke){
    	for(int i=0; i<n; i++) cout << a[i] << " ";
    	cout << endl;
    	int i = n-2;
    	while(i>=0 && a[i]>a[i+1]) i--;
    	if(i>=0){
    		int j=n-1;
    		while(a[j]<a[i]) j--;
    		swap(a[i], a[j]);
    		int r = i+1, s = n-1;
    		while(r<=s){
    			swap(a[r], a[s]);
    			r++; s--;
			}
		}
		else oke = false;
	}
}
