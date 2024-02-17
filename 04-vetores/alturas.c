#include <stdio.h>
#include <string.h>

int main(void)
{
    int qtdPessoas;

    printf("Quantidade de pessoas: ");
    scanf("%d", &qtdPessoas);

    char nomes[qtdPessoas][50];
    char nomesMenores[qtdPessoas][50];
    int idades[qtdPessoas];
    double alturas[qtdPessoas];

    double somaAlturas = 0;
    int somaMenores = 0;

    for(int i = 0; i < qtdPessoas; i++)
    {
        printf("Dados da %d%c pessoa\n", i + 1, 166);
        printf("Nome: ");
        fflush(stdin); // limpa o buffer do teclado antes de usar fgets
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // remove caractere de nova linha se presente

        printf("Idade: ");
        scanf("%d", &idades[i]);

        if(idades[i] < 16)
        {
            strcpy(nomesMenores[i], nomes[i]);
            somaMenores++;
        }

        printf("Altura: ");
        scanf("%lf", &alturas[i]);

        somaAlturas += alturas[i];
    }

    double mediaAlturas = (double) somaAlturas / qtdPessoas;
    double percentualMenores = (double) somaMenores / qtdPessoas * 100;

    printf("Altura media: %.2lf\n", mediaAlturas);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for(int i = 0; i < somaMenores; i++)
    {
        printf("%s\n", nomesMenores[i]);
    }

    return 0;
}