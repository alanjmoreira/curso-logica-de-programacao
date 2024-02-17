#include <stdio.h>

int main(void)
{
    int n;
    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];

    for (int i = 0; i < n; i++)
    {
        printf("Dados da %d%c pessoa:\n", i + 1, 166);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    int mais_velho = idade[0];
    int posicao_mais_velho;

    for (int i = 0; i < n; i++)
    {
        if (idade[i] > mais_velho)
        {
            mais_velho = idade[i];
            posicao_mais_velho = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nome[posicao_mais_velho]);

    return 0;
}