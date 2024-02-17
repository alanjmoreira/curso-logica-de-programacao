#include <stdio.h>

int main(void)
{
    int hora_inicial, hora_final, duracao;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);
    printf("Hora final: ");
    scanf("%d", &hora_final);

    if(hora_inicial < hora_final)
    {
        duracao = hora_final - hora_inicial;
    }
    else if(hora_inicial > hora_final)
    {
        duracao = 24 - (hora_inicial - hora_final);
    }
    else
    {
        duracao = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}