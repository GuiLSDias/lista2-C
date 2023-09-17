//Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o maior e valor da matriz.
#include <stdio.h>

int main(){
	int n;
	int m;
	int mat[100][100];
	int i;
	int j;
	int maior;
	
	printf("Digite o numero de linhas:");
	scanf("%d",&n);
	printf("Digite o numero de colunas:");
	scanf("%d",&m);
	
	//printf("");
	//scanf("");
	
	printf("Digite os elementos da matriz:");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&mat[i][j]);
	}
	
	maior = mat[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			if(mat[i][j]>maior)
				maior = mat[i][j];
	}
	printf("Matriz");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		   printf("%3d |",mat[i][j]);
	  printf("\n");	   
	}
	printf("\n");


	printf("O maior valor da matriz eh:%d",maior);
	return 0;
}
