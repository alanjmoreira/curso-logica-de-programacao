#include <stdio.h>

int main(void)
{
    int codigo, quantidade;
    double preco = 0.0;

    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    
    switch (codigo)
    {
    case 1:
        preco = 5.00;
        break;
    case 2:
        preco = 3.50;
        break;
    case 3:
        preco = 4.80;
        break;
    case 4:
        preco = 8.90;
        break;
    case 5:
        preco = 7.32;
    default:
        break;
    }

    if(preco == 0.0)
    {
        printf("Codigo invalido!\n");
    }
    else
    {
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        preco *= quantidade;
        printf("Valor a pagar: R$ %.2lf\n", preco);
    }

    return 0;
}