/*Desenvolver um algoritmo para calcular
e imprimir o preço final de um carro.
O valor do preço inicial de fábrica é 
fornecido por meio de entrada. 

O carro pode ter as seguintes opções:

• (a) Ar condicionado: R$ 1750,00
• (b) Pintura Metálica: R$ 800,00
• (c) Vidro Elétrico: R$ 1200,00
• (d) Direção Hidráulica: R$ 2000,00

*/

#include <stdio.h>
#include <string.h>

int main()
{
    float valorFabrica, precoFinal, acrescimo1, acrescimo2, acrescimo3, acrescimo4;
    char resp1[10], resp2[10], resp3[10], resp4[10];
    
    printf("Qual o valor de fábrica do carro?\n");
    scanf("%f", &valorFabrica);
    
    printf("Quais opções deseja adquirir?\nDigite 'sim' ou 'não'.\n[a] Ar condicionado: R$ 1750,00\n[b] Pintura Metálica: R$ 800,00\n[c] Vidro Elétrico: R$ 1200,00\n[d] Direção Hidráulica: R$ 2000,00\n");
    scanf("%s%s%s%s", resp1, resp2, resp3, resp4);
    
    
    if(strcmp(resp1,"sim") == 0){
        
        acrescimo1 = 1750;
        
    }
    
    if(strcmp(resp2,"sim") == 0){
        
        acrescimo2 = 800;
        
    }
    
    if(strcmp(resp3,"sim") == 0){
        
        acrescimo3 = 1200;
        
    }
    
    if(strcmp(resp4,"sim") == 0){
        
        acrescimo4 = 2000;
        
    }
    
    precoFinal = valorFabrica + acrescimo1 + acrescimo2 + acrescimo3 + acrescimo4;
    
    printf("O preço final do carro é de R$ %.2f", precoFinal);
    
    
    return 0;
}
