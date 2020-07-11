/*A Distribuidora de Combustíveis Ave Maria ira dar um aumento
em função da quantidade de combustível comprado anualmente por
seus clientes.

Os postos que consomem em média até 50.000 litros de combustível
ao mês, terão aumento de 20%. Os postos que consomem acima desta
média, 12% de aumento. A distribuidora ira fornecer o nome do posto
e seu consumo anual. Calcule e escreva qual será o preço do litro
de combustível para o posto, levando-se em conta que hoje a
distribuidora cobra R$3.63 por litro.

*/
#include <stdio.h>

int main()
{
    float consumoMensal, consumoAnual, precoAumento, precoAtual = 3.63;
    char nome[15];
    
    printf("Qual o nome do posto?\n");
    scanf("%s", nome);
    
    printf("Qual foi o consumo mensal médio do posto?\n");
    scanf("%f", &consumoMensal);
    
    consumoAnual = consumoMensal * 12;
    
    if(consumoMensal <= 50000){
        
        precoAumento = precoAtual * 1.2;
        
    }else{
        
        precoAumento = precoAtual * 1.12;
        
    }
    
    printf("O posto %s tem um consumo anual médio de %.2f litros\nO preço do litro de combustível nesse posto será de: R$ %.2f", nome, consumoAnual, precoAumento);

    return 0;
}
