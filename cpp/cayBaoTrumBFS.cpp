#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;

int n, s;
int a[MAX][MAX];
bool visited[MAX];
vector<pair<int, int>> edges;

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (a[v][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
                edges.push_back(make_pair(v, i));
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> s;

    bool connected = true;
    BFS(s);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            connected = false;
            break;
        }
    }

    if (!connected) {
        cout << "Do thi khong lien thong\n";
    } else {
        for (int i = 0; i < edges.size(); i++) {
            cout << edges[i].first << " " << edges[i].second << "\n";
        }
    }

    return 0;
}

