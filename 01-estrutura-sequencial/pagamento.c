#include <stdio.h>

int main(void)
{
    char nome[50];
    double valorPorHora, pagamento;
    int horasTrabalhadas;

    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0; // impede quebrar linha
    printf("Valor por hora: ");
    scanf("%lf", &valorPorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    pagamento = valorPorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}