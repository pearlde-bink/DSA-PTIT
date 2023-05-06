#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n; 
    int a[n];
    int min;
    for(int i=0;i<n;i++) cin >> a[i]; 
    for(int i=0;i<n-1;i++){ 
    	min = i;
        cout << "Buoc " << i+1 << ": "; 
        for(int j=i+1;j<n;j++){ 
            if(a[j] < a[min]){ 
				min = j;
			}
        }
        if(min!=i) swap(a[i], a[min]);
        for(int k=0;k<n;k++) cout << a[k] << " "; 
        cout << endl;
    }
}
/*
4
5 7 3 2
*/
