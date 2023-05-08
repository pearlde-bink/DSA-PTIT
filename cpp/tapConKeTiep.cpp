#include <iostream>
using namespace std;
int n, k;

int main(){
    int t; cin >> t;
	while(t--){
        cin >> n >> k;
        int b[k+1];
        for(int i=1; i<=k; i++){
            cin >> b[i];
        }
        b[0]=-1;
        for(int i=k; i>=0; i--){
        	if(b[i]!=n-k+i){
        		b[i]++;
        		for(int j=i+1; j<=k; j++){
        			b[j]=b[j-1]+1;
				}
				break;
			}
		}
		for(int i=1; i<=k; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}

/*
#include <iostream>
using namespace std;
int n, k, a[100];

void inkq(){
	for(int i=1; i<=k; i++)
		cout << a[i];
	cout << endl;
}

void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) inkq();
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}
*/
