#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int n, k ;
int a[20];

void toHop(int n, int k){
    for(int i=0; i<k; i++) a[i]=i+1;
    bool oke = true;
    while(oke){
    	for(int i=0; i<k; i++) cout << a[i] << " ";
    	cout << endl;
        int i=k-1;
        while(i>=0 && a[i]==n-k+i+1) i--;
		if(i>=0){
			a[i]=a[i]+1;
			for(int j=i+1; j<=k; j++){
				a[j]=a[i]+j-i;
			}
		}
		else oke = false;
	}
}

int main(){
    cin >> n >> k;
    set<int> se;
    vector<int> v;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	for(auto i : se){
		v.push_back(i);
	}
	n = se.size();
    toHop(n, k);	
}
