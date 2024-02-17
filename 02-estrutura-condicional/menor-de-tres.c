#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    if(a <= b && a <= c)
    {
        printf("Menor = %d\n", a);
    }
    else if(b <= a && b <= c)
    {
        printf("Menor = %d\n", b);
    }
    else
    {
        printf("Menor = %d\n", c);
    }

    return 0;
}