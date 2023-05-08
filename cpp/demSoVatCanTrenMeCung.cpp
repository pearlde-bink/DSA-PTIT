#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[1000][1000];
vector<pair<int, int>> canh[1000][1000];
bool xet[1000][1000];

void DFS(int x, int y, int dem){
	xet[x][y] = true;
	canh[x][y].push_back({dem, dem});
	for(int r = -1; r <= 1; r++){
		for(int c = -1; c <= 1; c++){
			if(r == 0 && c == 0) continue;
			int nr = x + r, nc = y + c;
			if(nr < 0 || nr >= n || nc < 0 || nc >= m || a[nr][nc] != '#' || xet[nr][nc]) continue;
			canh[x][y].back().second = dem;
			canh[x + r][y + c].push_back({dem, dem});
			DFS(nr, nc, dem);
		}
	}
}

int main(){
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int dem = 0; 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '#' && !xet[i][j]){
				dem++;
				DFS(i, j, dem);
			}
		}
	}
	cout << dem;
}

/*
5 6
.#....
..#...
..#..#
...##.
.#....
*/

