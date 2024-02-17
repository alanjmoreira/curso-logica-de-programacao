#include <stdio.h>

int main(void)
{
    int n;

    printf("Ordem da matriz: ");
    scanf("%d", &n);

    double matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    double soma_positivos = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > 0)
            {
                soma_positivos += matriz[i][j];
            }
        }
    }
    
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma_positivos);

    int linha, coluna;

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == linha)
            {
                printf("%.1lf ", matriz[i][j]);
            }
        }
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == coluna)
            {
                printf("%.1lf ", matriz[i][j]);
            }
        }
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%.1lf ", matriz[i][j]);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] < 0)
            {
                matriz[i][j] = matriz[i][j] * matriz[i][j];
                printf("%.1lf ", matriz[i][j]);
            }
            else
            {
                printf("%.1lf ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}