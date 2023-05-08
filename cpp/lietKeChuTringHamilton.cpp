/*#include<iostream>
using namespace std;

int i, n, a[100][100], b[100], c[100], d;

void result(void){
	for(int i=n; i>0; i--)
		cout << b[i] << " ";
	d++;
    cout << endl;
}

void hamilton(int *b, int *c, int i){
    int k;
    cin >> k;
    for(int j=1; j<=n; j++){
        if(a[b[i-1]][j]==1 && c[j]==0){
            b[i]=j; c[j]=1;
            if(i<n) hamilton(b, c, i+1);
            else if(b[i]==b[0])
                result();
            c[j]=0;
        }
    }
}

int main(){
    cin >> n;
    int a[n][n];
    for(int k=1; k<=n; k++){
        for(int j=1; j<=n; j++){
            cin >> a[k][j];
        }
	}
    for(int i=1; i<=n; i++) c[i]=0;
    b[0]=1; i=1; d=0;
    hamilton(b, c, i);
    if(d==0) cout << "Khong co do thi Hamilton.";
}*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
int n;
int graph[MAXN][MAXN];
vector<int> path;

void Hamilton(int u, int count) {
    if (count == n && graph[u][path[0]]) {
        // N?u tìm du?c chu trình Hamilton, in ra chu trình và d?ng thu?t toán
        for (int i = 0; i < n; i++)
            cout << path[i] << " ";
        cout << path[0] << endl;
        return;
    }

    for (int v = 0; v < n; v++) {
        if (graph[u][v] && find(path.begin(), path.end(), v) == path.end()) {
            // N?u d?nh v k? v?i d?nh u và chua có trong chu trình, thêm vào chu trình
            path.push_back(v);
            Hamilton(v, count + 1);
            path.pop_back();
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];
    int start;
    cin >> start;
    path.push_back(start);
    Hamilton(start, 1);
}

