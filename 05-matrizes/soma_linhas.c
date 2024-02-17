#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double matriz[m][n];
    double soma_matriz[m];

    for (int i = 0; i < m; i++)
    {
        printf("Digite os elementos da %d%c linha:\n", i + 1, 166);
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &matriz[i][j]);
            soma_matriz[i] += matriz[i][j];
        }
    }

    printf("VETOR GERADO:\n");

    for (int i = 0; i < m; i++)
    {
        printf("%.1lf\n", soma_matriz[i]);
    }

    return 0;
}