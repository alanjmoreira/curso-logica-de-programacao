#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nome[n][50];
    double nota1[n];
    double nota2[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite nome, primeira e segunda nota do %d%c aluno:\n", i + 1, 167);
        fflush(stdin); // limpa o buffer do teclado antes de usar fgets
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0'; // remove caractere de nova linha se presente
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);
    }

    char media[n];

    printf("Alunos aprovados:\n");

    for (int i = 0; i < n; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2;
        if(media[i] >= 6.0)
        {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}