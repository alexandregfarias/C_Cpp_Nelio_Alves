#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retângulo:");
    scanf("%lf", &base);

    printf("Altura do retângulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("AREA = %.2lf\n", area);
    printf("PERIMETRO = %.2lf\n", perimetro);
    printf("DIAGONAL = %.2lf\n", diagonal);


    return 0;
}
