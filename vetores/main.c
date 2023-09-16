#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++){
        printf("Digite um número para o vetor: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNúmeros digitados:\n");
    for (i = 0; i < n; i++) {
        printf("%.2lf\n", vet[i])
    }

    return 0;
}
