#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int numeros[n];
    int pares = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\n\nNUMEROS PARES:\n");

    for (int i = 0; i < n; i++)
    {
        if(numeros[i] % 2 == 0)
        {
            printf("%d ", numeros[i]);
            pares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES: %d\n", pares);

    return 0;
}