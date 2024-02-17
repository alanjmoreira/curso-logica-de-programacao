#include <stdio.h>

int main(void)
{
    int duracao, horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    minutos = (duracao / 60) % 60;
    segundos = duracao % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}