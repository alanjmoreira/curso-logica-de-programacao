#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("Digite as tres distancias:\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", a);
    }
    else if(b > a && b > c)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", b);
    }
    else
    {
        printf("MAIOR DISTANCIA = %.2lf\n", c);
    }

    return 0;
}