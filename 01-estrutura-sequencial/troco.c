#include <stdio.h>

int main(void)
{
    double precoProduto, dinheiroRecebido, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoProduto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido - (precoProduto * quantidade);

    printf("TROCO: %.2lf", troco);

    return 0;
}