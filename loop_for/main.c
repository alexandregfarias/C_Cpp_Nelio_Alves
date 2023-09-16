#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x, soma;

    printf("Quantos números serão ditigados? ");
    scanf("%d", &n);
    soma = 0;

    for (i = 1; i <= n; i++) {
        printf("Digite um número: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);

    return 0;
}


/*
    for ( início; condição; incremento) {

    }
           . Início é executado somente a primeira vez
           . Condição é executada para ver se entra no loop.
           . Incremento é executado ao final de cada loop.
           . Após o incremento, é verificada no vamente a condição. se condição válida - > entra loop
                                                                    se condição inválida - > saí do loop
*/
