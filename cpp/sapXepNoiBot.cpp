#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, b = 1;
	cin >> n;
	int a[n], i, j;
	bool k;
	for(i = 0; i < n; i++) cin >> a[i];
	for(i = 0; i < n - 1; i++){
		k = false;
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				k = true;
			}
		}
		if (k == false) break;
		cout << "Buoc " << b << ": ";
		for (j = 0; j < n; j++) cout << a[j] << " ";
		b++;
		cout << endl;
	}
}
/*
4
5 7 3 2
*/
