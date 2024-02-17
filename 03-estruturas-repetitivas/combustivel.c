#include <stdio.h>

int main(void)
{
    int combustivel;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &combustivel);

    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while (combustivel != 4)
    {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &combustivel);
        if(combustivel == 1)
        {
            alcool++;
        }
        else if(combustivel == 2)
        {
            gasolina++;
        }
        else if(combustivel == 3)
        {
            diesel++;
        }
    }

    printf("MUITO OBRIGADO!\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}