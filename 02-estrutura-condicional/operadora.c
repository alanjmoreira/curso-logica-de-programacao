#include <stdio.h>

int main(void)
{
    int minutos;
    float total;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if(minutos > 100)
    {
        total = 50.00 + ((minutos - 100) * 2.00);
        printf("Valor a pagar: %.2f\n", total);
    }
    else
    {
        total = 50.00;
        printf("Valor a pagar: %.2f\n", total);
    }

    return 0;
}