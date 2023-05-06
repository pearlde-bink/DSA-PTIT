#include <iostream>
#include <vector>
using namespace std;

//value la gia tri tong tien
//ans dem so lan xuat hien cua coins
//coins mang gia tri tien cho

void greedy(int value ,int coins[], vector<int> ans, int n){
    for(int i=n-1; i>=0; i--){
        //ans[i]=0;
        while(coins[i]<=value){
            value -= coins[i];
            ans.push_back(coins[i]);
        }
    }
    cout << ans.size() << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        int coins[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int value; cin >> value;
        vector<int> ans;
        greedy(value, coins, ans, 10);
    }
}
