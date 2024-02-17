#include <stdio.h>

int main(void)
{
    double salario, aumento, novo_salario;
    int porcentagem;

    printf("Digite o salario atual: ");
    scanf("%lf", &salario);

    if(salario <= 1000)
    {
        porcentagem = 20;
    }
    else if(salario > 1000 && salario <= 3000)
    {
        porcentagem = 15;
    }
    else if(salario > 3000 && salario <= 8000)
    {
        porcentagem = 10;
    }
    else
    {
        porcentagem = 5;
    }

    aumento = salario * porcentagem / 100;
    novo_salario = salario + aumento;

    printf("Novo salario: R$ %.2lf\n", novo_salario);
    printf("Aumento: R$ %.2lf\n", aumento);
    printf("Porcentagem: %d %%\n", porcentagem);

    return 0;
}