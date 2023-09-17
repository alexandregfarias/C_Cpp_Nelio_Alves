#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, dinheiro_recebido;
    int quantidade;

    printf("Preço unitário do Produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro_recebido);

    printf("TROCO = %.2lf", (dinheiro_recebido - (quantidade * preco)));


    return 0;
}
