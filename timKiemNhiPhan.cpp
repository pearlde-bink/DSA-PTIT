#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int binarySearch(int a[], int n, int x){
	int low = 0;
	int high = n - 1;
	int mid = (low + high) / 2;
	while(low <= high){
		if(x > a[mid]){
			low = mid + 1;
		}
		else if(x < a[mid]){
			high = mid - 1;
		}
		else return mid;
		mid = (low + high) / 2;
	}
	return -1;
}

int main() {
   int t; cin >> t;
   while(t--){
       int n, k; cin >> n >> k;
       int a[n];
       for(int i=0; i<n; i++) cin >> a[i];
       int i = binarySearch(a, n, k);
       if(i != -1) cout << i+1 << endl;
	   else cout << "NO" << endl;
   }
}

//co the danh dau luon index khi nhap mang, roi cout << mark do ra sau
//dung ham lower_bound trong thu vien algorithm

/*
2
5 3
1 2 3 4 5
6 5
0 1 2 3 9 10
*/

