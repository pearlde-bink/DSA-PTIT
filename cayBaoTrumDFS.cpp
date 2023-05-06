#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;

int n;
int matrix[MAX][MAX];
bool visited[MAX];

void DFS(int u, vector<pair<int, int>>& edges) {
    visited[u] = true;
    for (int v = 1; v <= n; v++) {
        if (matrix[u][v] && !visited[v]) {
            edges.push_back({u, v}); // Thêm c?nh (u, v) vào danh sách c?nh
            DFS(v, edges);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> matrix[i][j];
        }
    }

    int start;
    cin >> start;

    vector<pair<int, int>> edges;
    DFS(start, edges);

    bool connected = true;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            connected = false;
            break;
        }
    }

    if (!connected) {
        cout << "Do thi khong lien thong\n";
    } else {
        for (auto edge : edges) {
            cout << edge.first << " " << edge.second << "\n";
        }
    }

    return 0;
}

