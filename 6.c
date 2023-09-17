//Calcular a soma de 2 matrizes. *Verifique antes se elas são de mesma ordem.
#include <stdio.h>

int main() {
    int n, m;
	int mat1[100][100], mat2[100][100], s[100][100];
    int matOrdem = 1; 
    int i;
    int j;
    //printf("");
	//scanf("");
    printf("Digite o numero de linhas:");
	scanf("%d",&n);
	printf("Digite o numero de colunas:");
	scanf("%d",&m);
    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < n && matOrdem; i++) {
        for (j = 0; j < m; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                matOrdem = 0; 
                break;
            }
        }
    }
    if (!matOrdem) {
        printf("As matrizes nao tem a mesma ordem, portanto a soma nao eh definida.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            s[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("A soma das duas matrizes eh:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}

