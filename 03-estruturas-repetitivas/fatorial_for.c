#include <stdio.h>

int main(void)
{
    int n, fatorial = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        fatorial *= i;
    }

    printf("FATORIAL = %d\n", fatorial);

    return 0;
}