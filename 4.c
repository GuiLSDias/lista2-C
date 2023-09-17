//Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal principal. Dica, limite sua matriz a uma ordem 100.
#include <stdio.h>
#include <time.h>
void geraMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%50;
} 

int main(){
	int n;
	int m;
	int mat[100][100];
	int i;
	int j;
	int x;
	int cont = 0;
	
	printf("Digite o numero de linhas:");
	scanf("%d",&n);
	printf("Digite o numero de colunas:");
	scanf("%d",&m);
	//printf("");
	//scanf("");
	
	geraMatriz(mat,n,m);
	
	printf("Matriz");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		   printf("%3d |",mat[i][j]);
	  printf("\n");	   
	}
	printf("\n");
	
	printf("Diagonal Principal da Matriz:\n");
    for (i = 0; i < n && i < m; i++) {
        printf("%d ", mat[i][i]);
    }

    printf("\n");
	

	return 0;
}
