#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[50];
    double valor_por_hora, pagamento;
    int horas_trabalhadas;

    printf("Nome: ");
    fgets(&nome, 50, stdin);
    strtok(nome,"\n");

    printf("Valor por hora: ");
    scanf("%lf", &valor_por_hora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    pagamento = valor_por_hora * horas_trabalhadas;

    printf("O pagamento de %s deve ser de %.2lf", nome, pagamento);

    return 0;
}
