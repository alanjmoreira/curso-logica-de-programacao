#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &n);

    int matriz[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMATRIZ DIGITADA:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}