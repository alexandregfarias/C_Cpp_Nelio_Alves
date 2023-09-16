#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);


    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome);



    return 0;
}

    /* Scanf - > Para ler dados de típos básicos - > #include <stdio.h> */
    /* fgets - > Para ler texto até a quebra de linha - > #include <string.h> */
