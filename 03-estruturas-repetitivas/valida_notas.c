#include <stdio.h>

int main(void)
{
    double n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    while (n1 < 0 || n1 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &n1);
    }
    
    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);
            
    while(n2 < 0 || n2 > 10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &n2);
    }
    
    media = (n1 + n2) / 2;
    printf("MEDIA = %.2lf", media);
    
    return 0;
}