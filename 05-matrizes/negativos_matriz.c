#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &m);
    printf("Quantidade de colunas da matriz: ");
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

    printf("VALORES NEGATIVOS:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] < 0)
            {
                printf("%d\n", matriz[i][j]);
            }
        }
    }
    
    return 0;
}