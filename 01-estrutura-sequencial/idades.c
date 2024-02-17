#include <stdio.h>

int main(void)
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0; // impede quebrar linha
    printf("Idade: ");
    scanf("%d", &idade1);
    fflush(stdin);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0; // impede quebrar linha
    printf("Idade: ");
    scanf("%d", &idade2);
    fflush(stdin);

    media = (idade1 + idade2) / 2.0;

    printf("\n");
    printf("A idade media de %s e %s eh de %.1lf anos\n", nome1, nome2, media);

    return 0;
}