#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, x, soma;

    printf("Quantos n�meros ser�o ditigados? ");
    scanf("%d", &n);
    soma = 0;

    for (i = 1; i <= n; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);

    return 0;
}


/*
    for ( in�cio; condi��o; incremento) {

    }
           . In�cio � executado somente a primeira vez
           . Condi��o � executada para ver se entra no loop.
           . Incremento � executado ao final de cada loop.
           . Ap�s o incremento, � verificada no vamente a condi��o. se condi��o v�lida - > entra loop
                                                                    se condi��o inv�lida - > sa� do loop
*/
