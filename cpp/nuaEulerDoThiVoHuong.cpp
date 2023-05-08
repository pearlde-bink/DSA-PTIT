#include <iostream>
using namespace std;

const int max = 100;

int n;
int a[50][50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++) {
    	int bac = 0;
        for (int j = 0; j < n; j++) {
            if(a[i][j]==1) bac++;
        }
        if(bac%2==1) dem++;
        if(dem>2){
        	cout << "Khong phai do thi nua Euler" ;
        	break;
		}
    }
    if(dem==0 || dem==2) cout << "La do thi nua Euler" << endl;
}
