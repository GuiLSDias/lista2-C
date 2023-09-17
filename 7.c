//Efetuar a multiplicação de uma matriz de N Linhas x M Colunas por um escalar.
#include <stdio.h>

int main() {
    int n;
    int m;
    int i;
    int j;
	int mat[100][100];
    double escalar; 
	double resultado;
    //printf("");
	//scanf("");
    printf("Digite o numero de linhas:");
	scanf("%d",&n);
	printf("Digite o numero de colunas:");
	scanf("%d",&m);
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite o valor do escalar: ");
    scanf("%lf", &escalar); 
    printf("Matriz multiplicada pelo escalar:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            resultado = mat[i][j] * escalar;
            printf("%.2lf\t", resultado); 
        }
        printf("\n");
    }
    return 0;
}

