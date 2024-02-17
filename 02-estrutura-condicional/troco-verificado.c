#include <stdio.h>
#include <math.h>

int main(void)
{
    double preco, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - preco * quantidade;

    if(troco < 0.0)
    {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", fabs(troco));
    }
    else
    {
        printf("TROCO = %.2lf\n", troco);
    }

    return 0;
}