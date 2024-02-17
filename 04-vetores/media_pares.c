#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vetor[n], pares = 0, soma = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0)
        {
            soma += vetor[i];
            pares++;
        }
    }

    if(soma != 0)
    {
        double media = (double) soma / pares;
        printf("MEDIA DOS PARES = %.1lf\n", media);
    }
    else
    {
        printf("NENHUM NUMERO PAR\n");
    }

    return 0;
}