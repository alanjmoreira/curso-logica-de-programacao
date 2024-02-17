#include <stdio.h>

int main(void)
{
    int n;
    int vetor[10];

    printf("Quantos numeros voce vai digitar? ");  
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");

    for(int i = 0; i < n; i++)
    {
        if(vetor[i] < 0)
        {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}