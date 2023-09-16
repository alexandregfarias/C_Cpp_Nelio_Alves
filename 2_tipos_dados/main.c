#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    #include <string.h>
    - Permite chamar a função strcpy e passar o nome como parâmetro para criar o char de array.
*/
int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);


    return 0;
}
