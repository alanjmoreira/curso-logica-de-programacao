#include <stdio.h>

int main(void)
{
    int n;
    double a, b, c, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Digite tres numeros:\n");
        scanf("%lf%lf%lf", &a, &b, &c);
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("MEDIA = %.1lf\n", media);
    }

    return 0;
}