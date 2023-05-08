#include<bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node* left;
	Node* right;
	Node(int v){
		val = v;
		left = NULL;
		right = NULL;
	}
};

bool cnpdd(Node* root){
	if(root == NULL)
		return true;
	if(root->left == NULL && root->right == NULL)
		return cnpdd(root->left) && cnpdd(root->right);
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		unordered_map<int, Node*> nodes;
		for(int i=0; i<n; i++){
			int u, v;
			char x;
			cin >> u >> v >> x;
			if(nodes.find(u) == nodes.end()){
				nodes[u] = new Node(u);
			}
			if(nodes.find(v) == nodes.end()){
				nodes[v] = new Node(v);
			}
			if(x == 'L'){
				nodes[u]->left = nodes[v];
			}
			else {
				nodes[u]->right = nodes[v];
			}
		} 
		if(cnpdd(nodes[1])){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}

/*
2
4
1 2 L 1 3 R 2 4 L 2 5 R
3
1 2 L 1 3 R 2 4 L
*/

