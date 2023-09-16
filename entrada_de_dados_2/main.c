#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int idade, idade2;
    char nome[50], nome2[50];

    printf("Digite o valor da idade 1: ");
    scanf("%d", &idade);
    limpar_entrada();
    printf("Digite o nome 1: ");
    ler_texto(nome, 50);

    printf("Digite o valor da idade 2: ");
    scanf("%d", &idade2);
    limpar_entrada();
    printf("Digite o nome 2: ");
    ler_texto(nome2, 50);

    printf("NOME 1 = %s\n", nome);
    printf("IDADE 1 = %d\n", idade);
    printf("NOME 2 = %s\n", nome2);
    printf("IDADE 2 = %d\n", idade2);


    return 0;
}
