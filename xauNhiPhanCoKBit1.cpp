#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++) a[i]=0;
        bool hasNext = true;
        while(hasNext){
            int i=n-1;
            while(i>=0 && a[i]==1){
                a[i]=0;
                i--;
            }
            if(i>=0) a[i]=1;
            else hasNext = false;
            int sum=0;
            for(int i=0; i<n; i++){
                sum+=a[i];
            }
            if(sum==k) {
                for(int i=0; i<n; i++)
                    cout << a[i];
                cout << endl;
            }
        }
    }
}
