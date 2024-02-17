#include <stdio.h>
#include <math.h>

int main(void)
{
    double r, area;
    const double pi = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = pi * pow(r, 2);

    printf("AREA: %.3lf\n", area);

    return 0;
}