#include <bits/stdc++.h>
using namespace std;
int n, k;

bool nto(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    cin >> n >> k;
    int b[k+1];
    for(int i=0; i<k; i++){
        b[i] = i+1;
    }
    bool oke = true;
    int dem = 1;
    while(oke){
        if(nto(dem)){
            cout << dem << ": ";
            for(int i=0; i<k; i++){
			    cout << b[i] << " ";
		    }
		    cout << endl;
        }
        dem++;
		int i = k-1;
		while(i>=0 && b[i] == n-k+i+1){
			i--;
		}
		if(i>=0){
			b[i] = b[i] + 1;
			for(int j=i+1; j<=k; j++){
				b[j] = b[i] + j - i;
			}
		} else oke = false;
	}
}
