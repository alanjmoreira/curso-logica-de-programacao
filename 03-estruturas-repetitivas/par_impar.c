#include <stdio.h>

int main(void)
{
    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x > 0)
        {
            if(x % 2 != 0)
            {
                printf("IMPAR POSITIVO\n");
            }
            else
            {
                printf("PAR POSITIVO\n");
            }
        }
        else if(x < 0)
        {
            if(x % 2 != 0)
            {
                printf("IMPAR NEGATIVO\n");
            }
            else
            {
                printf("PAR NEGATIVO\n");
            }
        }
        else
        {
            printf("NULO\n");
        }
    }

    return 0;
}