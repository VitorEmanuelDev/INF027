/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro
Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser
pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char letra[] = "ag";
    float litrosA, litrosG, precoG = 2.7, precoA = 1.9, precoF;
    
    printf("Álcool ou gasolina?\n");
    printf("A - álcool.\n");
    printf("G - gasolina.\n");
    scanf("%c", &letra);
    
    if(letra[i] == 0){
        
        printf("Álcool escolhido.\n");
        printf("Quantos litros vai colocar no tanque?\n");
        scanf("%f", litrosA);
        
        if(abs(litrosA) < 25){
            
            precoF = precoA - (precoA * 0.02); 
            
        }
        
    } else if(letra[i] == 1){
        
        printf("Gasolina escolhida.\n");
        printf("Quantos litros vai colocar no tanque?\n");
        scanf("%f", litrosG);
    
    }
    
    return 0;
}
