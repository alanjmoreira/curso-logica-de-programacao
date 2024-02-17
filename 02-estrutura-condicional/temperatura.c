#include <stdio.h>

int main(void)
{
    char escala;
    double C, F;

    printf("Informe a escala da temperatura (C/F): ");
    escala = getchar();

    if(escala == 'C' || escala == 'c')
    {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = C * 1.8 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", F);
    } 
    else if(escala == 'F' || escala == 'f')
    {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = (F - 32) / 1.8;
        printf("Temperatura equivalente em Celsius: %.2lf\n", C);
    }

    return 0;
}