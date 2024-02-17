#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vetor[n];
    double soma = 0;
    double media;

    for(int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    printf("VALORES = ");

    for(int i = 0; i < n; i++)
    {
        printf("%.1lf ", vetor[i]);
        soma += vetor[i];
    }

    printf("\nSOMA = %.2lf\n", soma);
    media = (double) soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}