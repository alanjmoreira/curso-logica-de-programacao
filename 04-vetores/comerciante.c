#include <stdio.h>

int main(void)
{
    int n;
    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char produto[n];
    double preco_compra[n], preco_venda[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nPRODUTO %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &produto[i]);
        printf("Preco de compra: ");
        scanf("%lf", &preco_compra[i]);

        printf("Preco de venda: ");
        scanf("%lf", &preco_venda[i]);
    }

    double lucro[n];
    int abaixo = 0, entre = 0, acima = 0;

    for (int i = 0; i < n; i++)
    {
        lucro[i] = (preco_venda[i] - preco_compra[i]) / preco_venda[i] * 100;
        if(lucro[i] < 10)
        {
            abaixo++;
        }
        else if (lucro[i] >= 10 && lucro[i] <= 20)
        {
            entre++;
        }
        else
        {
            acima++;
        }
    }

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);

    double total_compra = 0, total_venda = 0;

    for (int i = 0; i < n; i++)
    {
        total_compra += preco_compra[i];
        total_venda += preco_venda[i];
    }

    printf("Valor total de compra = %.2lf\n", total_compra);
    printf("Valor total de venda = %.2lf\n", total_venda);

    double lucro_total = total_venda - total_compra;
    printf("Lucro total: %.2lf\n", lucro_total);

    return 0;
}