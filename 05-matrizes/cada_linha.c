#include <stdio.h>

int main(void)
{
    int n;

    printf("Ordem da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i = 0; i < n; i++)
    {
        int maior = matriz[i][0];
        for (int j = 0; j < n; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}