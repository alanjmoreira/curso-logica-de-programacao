#include <stdio.h>

int main(void)
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);
    
    if(glicose <= 100)
    {
        printf("Normal\n");
    }
    else if(glicose > 100 && glicose <= 140)
    {
        printf("Elevado\n");
    }
    else
    {
        printf("Diabetes\n");
    }

    return 0;
}