//Receba ou gere uma matriz N por M e conte quantos números iguais a X existem na matriz. X deve ser informado pelo usuário.
#include <stdio.h>

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
	printf("Digite o elemento x:");
	scanf("%d",&x);
	//printf("");
	//scanf("");
	
	printf("Digite os elementos da matriz:");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&mat[i][j]);
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			if(mat[i][j]==x)
				cont++;
	}
	printf("Matriz");
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		   printf("%3d |",mat[i][j]);
	  printf("\n");	   
	}
	printf("\n");


	printf("Quantidade de valores da matriz iguais a X eh:%d",cont);
	return 0;
}
