#include <stdio.h>

int main(void)
{
    int a, b, aux;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &a, &b);

    if(b > a)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if(a % b == 0)
    {
        printf("Sao multiplos\n");
    } else {
        printf("Nao sao multiplos\n");
    }

    return 0;
}