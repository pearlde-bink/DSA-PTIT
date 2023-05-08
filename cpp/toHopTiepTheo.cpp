#include <iostream>
#include <map>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[k];
        map<int, int> ma;
        for(int i=0; i<k; i++){
        	cin >> a[i];
        	ma[a[i]]++;
		}
        bool oke = true;
	    int dem = 0;
        while(oke){
	        int i=k-1;
	        while(i>=0 && a[i]==n-k+i+1) i--;
			if(i>=0){
				a[i]=a[i]+1;
				for(int j=i+1; j<=k; j++){
					a[j]=a[i]+j-i;
				}
			}
			else {
				oke = false;
				dem=k;
			}
			break;
		}
		for(int i=0; i<k; i++){
			if(ma[a[i]]==0) dem++;
		}
		cout << dem << endl;
    }
}
