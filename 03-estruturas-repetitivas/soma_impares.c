#include <stdio.h>

int main(void)
{
    int x, y;
    int soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d%d", &x, &y);

    if(x < y)
    {
        for(int i = x; i < y; i++)
        {
            if(i % 2 != 0 && i != x)
            {
                soma += i;      
            }
        }
    }
    else
    {
        for(int i = x; i > y; i--)
        {
            if(i % 2 != 0 && i != x)
            {
                soma += i;
            }
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}