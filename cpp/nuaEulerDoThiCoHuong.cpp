#include <bits/stdc++.h>
using namespace std;

int n;
int a[50][50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int count1, count2;
    for (int i = 0; i < n; i++) {
        int bbv = 0, bbr = 0;
        for (int j = 0; j < n; j++) {
            if (a[j][i] == 1) {
                bbv++;
            }
            if (a[i][j] == 1) {
                bbr++;
            }
        }
        if(abs(bbr-bbv)==1) count1++;
        else if(abs(bbr-bbv)==0) count2++;
        if(count1==2 && count2==(n-2)){
            cout << "La do thi nua Euler";
            break;
        }
    }
    if(count1!=2 || count2!=(n-2)) cout << "Khong phai do thi nua Euler" << endl;
}

