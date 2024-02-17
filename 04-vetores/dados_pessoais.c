#include <stdio.h>

int main(void)
{
    int n;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double altura[n];
    char genero[n];

    for (int i = 0; i < n; i++)
    {
        printf("Altura da %d%c pessoa: ", i + 1, 166);
        scanf("%lf", &altura[i]);
        printf("Genero da %d%c pessoa: ", i + 1, 166);
        scanf(" %c", &genero[i]);
    }

    double menor_altura = altura[0];
    double maior_altura = altura[0];

    for (int i = 0; i < n; i++)
    {
        if (altura[i] < menor_altura)
        {
            menor_altura = altura[i];
        }
        else if (altura[i] > maior_altura)
        {
            maior_altura = altura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menor_altura);
    printf("Maior altura = %.2lf\n", maior_altura);

    double altura_mulheres = 0;
    double total_mulheres = 0;
    double total_homens = 0;

    for (int i = 0; i < n; i++)
    {
        if (genero[i] == 'F')
        {
            altura_mulheres += altura[i];
            total_mulheres++;
        }
        else
        {
            total_homens++;
        }
    }

    double media_altura_mulheres = altura_mulheres / total_mulheres;
    printf("Media das alturas das mulheres = %.2lf\n", media_altura_mulheres);
    printf("Numero de homens = %.lf\n", total_homens);

    return 0;
}