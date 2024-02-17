#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int contador = n;
    int fatorial = 1;

    while (contador >= 1)
    {
        fatorial *= contador;
        contador--;
    }

    printf("Fatorial de %d = %d", n, fatorial);

    return 0;
}