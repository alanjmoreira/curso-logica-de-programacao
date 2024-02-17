#include <stdio.h>

int main(void)
{
    int n;

    printf("Quantos valores vao ter cada vetor? ");
    scanf("%d", &n);

    int A[n], B[n], C[n];

    printf("Digite os valores do vetor A:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("VETOR RESULTANTE:\n");
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[i];
        printf("%d\n", C[i]);
    }

    return 0;
}