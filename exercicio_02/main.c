#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    char nome2[50];
    int idade;
    int idade2;
    double media_idades = 0;

    printf("Nome da primeira pessoa:\n");
    fgets(&nome, 50, stdin);

    printf("Idade da primeira pessoa:\n");
    scanf("%d", &idade);
    getchar();

    printf("Nome da Segunda pessoa:\n");
    fgets(&nome2, 50, stdin);

    printf("Idade da Segunda pessoa:\n");
    scanf("%d", &idade2);

    media_idades = (((double)idade + (double)idade2) / 2);

    strtok(nome, "\n");
    strtok(nome2, "\n");
    printf("A idade média de %s e %s é de %.1lf anos", nome, nome2, media_idades);

    return 0;
}
