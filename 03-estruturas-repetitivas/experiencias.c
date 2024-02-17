#include <stdio.h>

int main(void)
{
    int n, cobaias;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    int total_cobaias = 0, total_coelhos = 0, total_ratos = 0, total_sapos = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &cobaias);

        total_cobaias += cobaias;

        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if(tipo == 'C')
        {
            total_coelhos += cobaias;
        }
        else if(tipo == 'R')
        {
            total_ratos += cobaias;
        }
        else if(tipo == 'S')
        {
            total_sapos += cobaias;
        }
    }

    printf("RELATORIO FINAL\n");
    printf("Total: %d\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);

    double perc_coelhos, perc_ratos, perc_sapos;

    perc_coelhos = (double) total_coelhos / total_cobaias * 100;
    perc_ratos = (double) total_ratos / total_cobaias * 100;
    perc_sapos = (double) total_sapos / total_cobaias * 100;

    printf("Percentual de coelhos: %.2lf\n", perc_coelhos);
    printf("Percentual de ratos: %.2lf\n", perc_ratos);
    printf("Percentual de sapos: %.2lf\n", perc_sapos);

    return 0;
}