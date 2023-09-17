//Faça um programa que leia ou gere duas matrizes N X M de mesma ordem com valores reais. Ofereça ao usuário um menu de opções: (a) somar as duas matrizes (b) subtrair a primeira matriz da segunda (c) adicionar uma constante 
//as duas matrizes (d) imprimir as matrizes Nas duas primeiras opções uma terceira matriz deve ser criada. Na terceira opção o valor da constante deve ser lido e o resultado da adição da constante deve ser armazenado na própria matriz
#include <stdio.h>
void somarMatrizes(int N, int M, double matriz1[N][M], double matriz2[N][M], double resultado[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void subtrairMatrizes(int N, int M, double matriz1[N][M], double matriz2[N][M], double resultado[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}
void adicionarConstante(int N, int M, double matriz[N][M], double constante) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] += constante;
        }
    }
}
void imprimirMatriz(int N, int M, double matriz[N][M]) {
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;
    double constante;

    printf("Digite o número de linhas (N) e colunas (M) das matrizes:\n");
    scanf("%d %d", &N, &M);

    double matriz1[N][M], matriz2[N][M], resultado[N][M];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lf", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lf", &matriz2[i][j]);
        }
    }

    int escolha;
    do {
        printf("\nMenu de Opções:\n");
        printf("(a) Somar as duas matrizes\n");
        printf("(b) Subtrair a primeira matriz da segunda\n");
        printf("(c) Adicionar uma constante às duas matrizes\n");
        printf("(d) Imprimir as matrizes\n");
        printf("(0) Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 'a':
                somarMatrizes(N, M, matriz1, matriz2, resultado);
                printf("Soma das matrizes:\n");
                imprimirMatriz(N, M, resultado);
                break;
            case 'b':
                subtrairMatrizes(N, M, matriz1, matriz2, resultado);
                printf("Subtração das matrizes:\n");
                imprimirMatriz(N, M, resultado);
                break;
            case 'c':
                printf("Digite a constante a ser adicionada às matrizes: ");
                scanf("%lf", &constante);
                adicionarConstante(N, M, matriz1, constante);
                adicionarConstante(N, M, matriz2, constante);
                printf("Matriz 1 após adição da constante:\n");
                imprimirMatriz(N, M, matriz1);
                printf("Matriz 2 após adição da constante:\n");
                imprimirMatriz(N, M, matriz2);
                break;
            case 'd':
                printf("Matriz 1:\n");
                imprimirMatriz(N, M, matriz1);
                printf("Matriz 2:\n");
                imprimirMatriz(N, M, matriz2);
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);
    return 0;
}

