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
        if(bbr%2!=0 || bbv%2!=0) {
            cout << "Khong phai do thi Euler" << endl;
            return 0;
        }
    }
    cout << "La do thi Euler" << endl;
}
