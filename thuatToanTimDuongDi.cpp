#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
int A[50][50], n, chuaxet[50], truoc[50], s, t;

void Init(void){
	int i, j; FILE *fp;
	fp = fopen("", "r");
	fscanf(fp, "%d", &n);
	printf("\n So dinh do thi: %d", n);
	for(i=1; i<=n; i++){
		printf("\n"); 
		chuaxet[i]=TRUE;
		truoc[i]=0;
		for(j=1; j<=n; j++){
			fscanf(fp, "%d", &A[i][j]);
			printf("%3d", A[i][j]);
		}
	}	
}
void DFS(int u){
	int v;
	printf("%3d", u); chuaxet[u]=FALSE;
	for(v=1; v<=n; v++){
		if(A[u][v] && chuaxet[v]){
			truoc[v]=u;
			DFS(v);
		}
	}
}
void BFS(int i){
	int queue[50], low=1, high=1, u, v;
	queue[low]=i; 
	chuaxet[i]=FALSE;
	while(low<=high){
		u = queue[low];
		low++;
		for(v=1; v<=n; v++){
			if(A[u][v] && chuaxet[v]){
				high = high+1;
				queue[high]=v;
				truoc[v]=u;
				chuaxet[v]=FALSE;
			}
		}
	}
}
void duongDi(void){
	if(truoc[t]==0){
		printf("\n Khong ton tai duong di");
		getch();
		return;
	}
	printf("\n Duong di:");
	int j=t; 
	printf("%3d<=", j);
	while(truoc[j]!=s){
		printf("%3d<=", truoc[j]);
		j=truoc[j];
	}
	printf("%3d", s);
	getch();
}

int main(){
	Init();
	printf("\n Dinh dau:");
	scanf("%d", &s);
	printf("\nDinh cuoi:");
	scanf("%d", &t);
	DFS(s); //BFS(s);
	duongDi();
}



