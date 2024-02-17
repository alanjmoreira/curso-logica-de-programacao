#include <stdio.h>

int main(void)
{
    int n;
    double numerador, denominador, divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%lf", &numerador);
        printf("Entre com o denominador: ");
        scanf("%lf", &denominador);
        if(denominador != 0)
        {
            divisao = numerador / denominador;
            printf("DIVISAO = %.2lf\n", divisao);
        }
        else
        {
            printf("DIVISAO IMPOSSIVEL\n");
        }
    }

    return 0;
}