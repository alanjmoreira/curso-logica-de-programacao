#include <stdio.h>

int main(void)
{
    int x;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    while (x != 0)
    {
        int contador = 1;
        int soma = x;
        while (contador < 5)
        {
            if(x % 2 != 0)
            {
                x++;
                contador = 0;
                soma = x;
            }
            else
            {
                soma += (x + 2);
                x += 2;
            }
            contador++;
        }
        printf("SOMA = %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }

    return 0;
}