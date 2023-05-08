/*#include <bits/stdc++.h>
using namespace std;

void mergeSort(int a[], int first, int end){
    int t;    
    if(first<end){              
        t=(first+end)/2;    
        mergeSort(a,first,t);   
        mergeSort(a,t+1,end);   
        merge(a,first,t,end);   
    }
    else    
        return;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		mergeSort(a, a[0], a[n-1]);
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}*/
/*
2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
