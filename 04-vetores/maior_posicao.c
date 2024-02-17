#include <stdio.h>

int main(void)
{
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double reais[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &reais[i]);
    }

    double maior = reais[0];
    int posicao;

    for (int i = 0; i < n; i++)
    {
        if(maior < reais[i])
        {
            maior = reais[i];
            posicao = i;
        }
    }

    printf("MAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0;
}