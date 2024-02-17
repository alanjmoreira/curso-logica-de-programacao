#include <stdio.h>

int main(void)
{
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado = a * a;
    areaTriangulo = (a * b) / 2.0;
    areaTrapezio = (a + b) * c / 2.0;

    printf("AREA DO QUADRADO: %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO: %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO: %.4lf\n", areaTrapezio);

    return 0;
}