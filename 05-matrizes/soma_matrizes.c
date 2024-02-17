#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &m);
    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &n);

    int matrizA[m][n];
    int matrizB[m][n];

    printf("Digite os valores da Matriz A:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da Matriz B:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    int matrizSoma[m][n];

    printf("SOMA DAS MATRIZES:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}