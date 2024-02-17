#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, delta, x1, x2;

    printf("Coeficiente A: ");
    scanf("%f", &a);
    printf("Coeficiente B: ");
    scanf("%f", &b);
    printf("Coeficiente C: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if(delta < 0) {
        printf("Esta equacao nao possui raizes reais\n");
    } else {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4f\n", x1);
        printf("X2 = %.4f\n", x2);
    }

    return 0;
}