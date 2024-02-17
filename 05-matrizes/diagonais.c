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

    printf("\nMATRIZ DIGITADA:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDIAGONAL SUPERIOR DA MATRIZ:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nDIAGONAL PRINCIPAL DA MATRIZ:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nDIAGONAL INFERIOR DA MATRIZ:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                printf("%d ", matriz[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    } 

    return 0;
}