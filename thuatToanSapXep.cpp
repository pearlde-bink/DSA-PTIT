#include <bits/stdc++.h>
using namespace std;

/*
void swap(int a, int b){
	if(a<b){
		int tmp = a;
		a = b;
		b = tmp;
	}
}*/

/* interchange sort
void interchange(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i]) swap(a[i], a[j]);
        }
    }
}*/

/* buble sort
void buble(int a[n], int n){
	for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
			if(a[j] < a[j-1]) swap(a[j], a[j-1]);
		}
	}
}*/

/* insertion sort
void insertionSort(int a[], int n){
	int pos, x;
	for(int i=1; i<n; i++){
		x = a[i];
		pos = i;
		while(pos>0 && x<a[pos-1]){
			a[pos] = a[pos-1];
			pos--;
		}
		a[pos] = x;
	}
}*/

/* selection sort
void selectionSort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]) min = j;
		}
		if(min != i) swap(a[min], a[i]);
	}
}*/

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++) cin >> a[i];
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]) min = j;
		}
		if(min != i){
			int tmp = a[min];
			a[min] = a[i];
			a[i] = tmp;
		}
	}
	for(int i=0; i<n; i++) cout << a[i] << " ";
}
/*
5
3 9 7 1 5
*/
