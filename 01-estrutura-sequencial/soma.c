#include <stdio.h>

int main(void)
{
    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("SOMA: %d", soma);

    return 0;
}