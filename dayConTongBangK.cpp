#include <bits/stdc++.h>
using namespace std;

bool check=false;

void sinh(int M[], int n){
	bool ok = false;
	for(int i = n - 1; i >= 0; i--){
		if(M[i] == 0){
			ok = true;
			M[i] = 1;
			for(int j = i + 1; j < n; j++) M[j]=0;
			break;
		}
	}
	if(ok == false) check = true;
}

bool ktra(int M[], int N[], int n, int k){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(N[i] == 1) sum += M[i];
	}
	if(sum==k) return true;
	return false;
}

void in(int M[], int N[], int n){
	for(int i = 0; i < n; i++){
		if(N[i] == 1) cout << M[i] << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int M[100];
		int dem = 0;
		for(int i = 0; i < n; i++) cin >> M[i];
		int N[100] = {0};
		while(check == false){
			if(ktra(M, N, n, k)){
				in(M, N, n);
				dem++;
			}
			sinh(N, n);
		}
		cout << dem << endl;
	}
}


