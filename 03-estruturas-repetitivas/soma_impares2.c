#include <stdio.h>

int main(void)
{
    int x, y, aux;
    int soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d%d", &x, &y);

    if(x > y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    for(int i = x; i < y; i++)
    {
        if(i % 2 != 0 && i != x)
        {
            soma += i;      
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}