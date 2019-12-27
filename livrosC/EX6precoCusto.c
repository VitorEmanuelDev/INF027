/*O custo ao consumidor de um carro novo
é a soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo
de fábrica). Supondo que a porcentagem do distribuidor
seja de 12% do preço de fábrica e os impostos de 30% do
preço de fábrica, fazer um programa para ler o custo de
fábrica de um carro e imprimir o preço ao consumidor.*/

#include <stdio.h>

int main()
{
    float custoFab, precoConsum;
    
    printf("Informe o custo de fábrica.\n");
    scanf("%f", &custoFab);
    
    precoConsum = custoFab + (custoFab * 0.12) + (custoFab * 0.3);
    
    printf("O preço do carro após a aplicação de custos é de R$ %.2f .", precoConsum);

    return 0;
}
