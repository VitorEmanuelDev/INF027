/*Escreva um algoritmo para calcular o consumo
médio de um automóvel (medido em Km/l), dado que
são conhecidos a distância total percorrida e o
volume de combustível consumido para percorrê-la
(medido em litros).*/

#include <stdio.h>

int main()
{
    float distancia, combustivel, consumo;
    
    printf("Informe a distância em Km.\n");
    scanf("%f", &distancia);
    
    printf("Informe a quantidade de combustível utilizado em litros.\n");
    scanf("%f", &combustivel);
    
    consumo = combustivel/distancia;
    
    printf("O consumo médio foi de %.2f litros por Km percorrido.", consumo);

    return 0;
}
