/*Um fabricante de latas deseja desenvolver
um algoritmo para calcular o custo de uma lata
cilíndrica de alumínio, sabendo-se que o custo
do alumínio por m² (100cm²) é R$ 100,00.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, areaCirculo, areaTotal, perimetroCirculo, pi = 3.14, raio, custoLata;
    
    printf("Informe o raio da lata em metros: \n");
    scanf("%f", &raio);
    printf("Informe a altura da lata em metros: \n");
    scanf("%f", &altura);
    
    
    perimetroCirculo = pi * 2 * raio;
    areaCirculo = pi * pow(raio, 2);
    areaTotal = (perimetroCirculo * altura) + 2 * (areaCirculo);
    custoLata = areaTotal * 100;
    
    printf("O custo do alumínio utilizado para fazer a lata foi de R$ %.2f por lata", custoLata);

    return 0;
}
