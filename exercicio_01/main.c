#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, metro_quadrado, area, preco;



    printf("Digite a largura do terreno:\n");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno:\n");
    scanf("%lf", &comprimento);

    area = largura * comprimento;

    printf("Digite o valor do metro quadrado:\n");
    scanf("%lf", &metro_quadrado);

    preco = area * metro_quadrado;

    printf("Área do terreno = %.2lf\n", area);
    printf("Preço do terreno = %.2lf\n", preco);


    return 0;
}
