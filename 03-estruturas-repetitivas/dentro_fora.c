#include <stdio.h>

int main(void)
{
    int n, x;
    int dentro = 0;
    int fora = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);
    
    return 0;
}