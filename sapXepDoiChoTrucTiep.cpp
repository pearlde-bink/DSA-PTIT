#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n; 
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i]; 
    for(int i=0;i<n-1;i++){ 
        for(int j=i+1;j<n;j++){ 
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
        cout << "Buoc " << i+1 << ": "; 
        for(int k=0;k<n;k++) cout << a[k] << " "; 
        cout << endl;
    }
}
/*
4
5 7 3 2
*/
