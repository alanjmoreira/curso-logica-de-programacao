#include <stdio.h>

int main(void)
{
    double nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("NOTA FINAL: %.1lf\n", nota1 + nota2);

    if(nota1 + nota2 < 60.00)
    {
        printf("REPROVADO\n");
    }

    return 0;
}