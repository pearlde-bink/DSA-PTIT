#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) a[i]=0;
        bool hasNext = true;
        while(hasNext){
            for(int i=0; i<n; i++){
                if(a[i]==0) cout << 'A';
                else if(a[i]==1) cout << 'B';
                //cout << a[i];
            }
            int i=n-1;
            while(i>=0 && a[i]==1){
                a[i]=0;
                i--;
            }
            if(i>=0) a[i]=1;
            else hasNext = false;
            cout << " ";
        }
        cout << endl;
    }
}
