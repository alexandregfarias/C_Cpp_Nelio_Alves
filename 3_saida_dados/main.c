#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x = 10;
    int y = 20;
    double z = 40.5;

    printf("Bom dia.\n");
    printf("Boa noite.\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.2lf\n", z);

    return 0;
}

/* PLACEHOLDER DE FORMATAÇÃO: */
/*
    int            - > %d ou %i
    long int       - > %li
    long long int  - > %lli
    float          - > %f
    double         - > %lf   controle casa decimal - > %.Zlf - > Onde Z = qtd casas decimais desejadas.
    char           - > %c
    char[]         - > %s

    printf         - > Biblioteca #include <stdio.h>
*/

