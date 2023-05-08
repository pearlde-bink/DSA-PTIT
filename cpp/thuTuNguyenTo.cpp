#include <iostream>
using namespace std;
int n, k, a[100];

int nto(int n){
    if(n<2) return 0;
    for(int i=2; i<=n/2; i++){
        if(n%2 == 0) return 0;
    }
    return 1;
}

void inkq(){
	for(int i=1; i<=k; i++)
		cout << a[i];
	cout << endl;
}

void Try(int i){
    int dem = 0;
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k){
		    dem++;
		    if(nto(dem)){
		        cout << dem << ": ";
				inkq();
		    }
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
