#include <stdio.h>
#include <math.h>

int main(void)
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("\n");
    printf("AREA: %.4lf\n", area);
    printf("PERIMETRO: %.4lf\n", perimetro);
    printf("DIAGONAL: %.4lf\n", diagonal);

    return 0;
}