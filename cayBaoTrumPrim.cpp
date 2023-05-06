#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int MAX = 1005;

int n, s;
int a[MAX][MAX];
int d[MAX], p[MAX];
bool used[MAX];

void prim() {
    for (int i = 1; i <= n; i++) {
        d[i] = INF;
        used[i] = false;
    }
    d[s] = 0;
    p[s] = -1;

    for (int i = 1; i <= n; i++) {
        int v = -1;
        for (int j = 1; j <= n; j++) {
            if (!used[j] && (v == -1 || d[j] < d[v])) {
                v = j;
            }
        }
        if (d[v] == INF) {
            cout << "Do thi khong lien thong" << endl;
            return;
        }
        used[v] = true;

        if (p[v] != -1) {
            cout << p[v] << " " << v << endl;
        }

        for (int u = 1; u <= n; u++) {
            if (!used[u] && a[v][u] < d[u]) {
                d[u] = a[v][u];
                p[u] = v;
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (p[i] != -1) {
            res += a[i][p[i]];
        }
    }
    cout << res << endl;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> s;
    prim();
    return 0;
}

