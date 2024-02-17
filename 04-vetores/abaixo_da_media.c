#include <stdio.h>

int main(void)
{
    int n;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    double reais[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &reais[i]);
    }

    double soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += reais[i];
    }

    double media = (double) soma / n;
    printf("\n\nMEDIA DO VETOR = %.3lf\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (int i = 0; i < n; i++)
    {
        if(reais[i] < media)
        {
            printf("%.1lf\n", reais[i]);
        }
    }

    return 0;
}