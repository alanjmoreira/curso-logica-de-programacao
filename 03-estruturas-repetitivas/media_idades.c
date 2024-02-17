#include <stdio.h>

int main(void)
{
    int idade;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);
    
    int soma = 0, contador = 0;

    while (idade >= 0)
    {
        soma += idade;
        contador++;
        scanf("%d", &idade);
    }

    if(soma == 0)
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else
    {
        media = (double) soma / contador;
        printf("MEDIA = %.2lf", media);
    }

    return 0;
}