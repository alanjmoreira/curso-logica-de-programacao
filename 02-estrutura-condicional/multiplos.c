#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &a, &b);

    if(b > a)
    {
        if(b % a == 0)
        {
            printf("Sao multiplos\n");
        }
        else
        {
            printf("Nao sao multiplos\n");
        }
    }
    else
    {
        if(a % b == 0)
        {
            printf("Sao multiplos\n");
        }
        else
        {
            printf("Nao sao multiplos\n");
        }
    }

    return 0;
}