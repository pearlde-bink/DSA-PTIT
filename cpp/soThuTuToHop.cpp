#include <iostream>
using namespace std;
int n, k;
int a[20], b[20];

bool check(){
	for(int i=0; i<k; i++) 
		if(a[i]!=b[i]) return 0;
	return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
	    int address = 0;
        for(int i=0; i<k; i++) {
        	b[i]=i+1;
        	cin >> a[i];
		}
		while(++address){
			if(check()){
				cout << address << endl;
				break;
			}
			int i=k-1;
	        while(i>=0 && b[i]==n-k+i+1) i--;
			if(i>=0){
				b[i]=b[i]+1;
				for(int j=i+1; j<=k; j++)
					b[j]=b[i]+j-i;
			}
		}
    }
}
