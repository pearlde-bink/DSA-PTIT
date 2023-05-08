#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
#define TRUE 1
#define FALSE 0
int A[50][50], n, chuaxet[50], solt=0;

void readData(void){
	int i;
	FILE *fp;
	fp = fopen("", "r");
	fscanf(fp, "%d", &n);
	for(i=1; i<=n; i++){
		printf("\n");
		for(j=1; j<=n; j++){
			fscanf(fp, "%d", &A[i][j]);
		}
	}
}
void BFS(int u){
	int queue[50], low = 1, high =1, s, t;
	queue[low] = u; chuaxet[u] = FALSE;
	while(low <= high){
		s= queue[low]; 
		low++;
		for(t=1; t<=n; t++){
			if(A[s][t] && chuaxet[t]){
				high++;
				queue[high] = t;
				chuaxet[t] = FALSE;
			}
		}
	}
}
void DFS(int u){
	int v;
	chuaxet[u] = FALSE;
	for(v=1; v<=n; v++){
		if(A[u][v] && chuaxet[v]) DFS(v);
	}
}
void reInit(void){
	for(i=1; i<=n; i++){
		chuaxet[i]=TRUE;
	}
}
int testSoLienThong(void){
	for(int u=1; u<=n; u++){
		if(chuaxet[u]) return(1);
	}
	return(0);
}

int main(){
	readData();
	reInit();
	for(int u=1; u<=n; u++){
		DFS(1); //BFS(1);
		if(testSoLienThong()) printf("\n Dinh %d la tru", u);
		reInit();
	}
}



