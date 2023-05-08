
#include <bits/stdc++.h>
using namespace std;

bool check = false; 

void sinh(int M[], int n){
    bool ok = false;
    for(int i=n-1; i>=0; i--){
        if(M[i]==0){
            ok = true;
            M[i]=1;
            for(int j=i+1; j<n; j++) M[j]=0;
            break;
        }
    }
    if(ok == false) check = true;
}

bool ktra(int M[], int N[], int n, int k){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(N[i]==1) sum+=M[i];
    }
    if(sum == k) return true;
    return false;
}

void in(int M[], int N[], int n){
    for(int i=0; i<n; i++){
        if(N[i] == 1) cout << M[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, k; cin >> n >> k;
    int M[100];
    int N[100] = {0};
    int dem = 0;
    for(int i=0; i<n; i++) cin >> M[i];
    while(check == false){
        if(ktra(M, N, n, k)){
            in(M, N, n);
            dem++;
        }
        sinh(N, n);
    }
    cout << dem << endl;
}

/*#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a, b;
vector<vector<int>> res;
void pb(){
    int sum = 0;
    for(int i = 0; i < n; i++)
        if (a[i] == 1) sum += b[i];
    if(sum == k) res.push_back(a);
}
void BackTrack(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n - 1) pb();
        else BackTrack(i + 1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n, 0);
    b.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> b[i];
    BackTrack(0);
    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++)
            if (res[i][j] == 1) cout << b[j] << ' ';
        cout << endl;
    }
    cout << res.size();
}*/
