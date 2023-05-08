#include <bits/stdc++.h>
using namespace std;

void thapHn(int n, char A, char B, char C){
	if(n==1) cout << A << " -> " << C << endl;
	else{
		thapHn(n-1, A, C, B);
		cout << A << " -> " << C << endl;
		thapHn(n-1, B, A, C);
	}
}

int main(){
    int n; cin >> n;
    thapHn(n, 'A', 'B', 'C');
}

