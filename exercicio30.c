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

float main()
{
    
     
    int i;
    char letra;
    char alga[] = "ag";
    float litrosA, litrosG; 
    float precoG = 2.70, precoA = 1.90, precoF;
    
    printf("Álcool ou gasolina?\n");
    printf("A - álcool.\n");
    printf("G - gasolina.\n");
    scanf("%c", &letra);
    
    if(letra == alga[0]){
        
        printf("Álcool escolhido.\n");
        printf("Quantos litros vai colocar no tanque?\n");
        scanf("%f", &litrosA);
        
        if(litrosA > 0 && litrosA < 25){
        
            precoF = precoA *litrosA - (precoA * litrosA * 0.02); 
            printf("Preço: %.2f", precoF);
            
        } else {
            
            precoF = precoA *litrosA - (precoA * litrosA * 0.04);   
            printf("Preço: %.2f", precoF);
            
        }
        
    } else if(letra == alga[1]){
        
        printf("Gasolina escolhida.\n");
        printf("Quantos litros vai colocar no tanque?\n");
        scanf("%f", &litrosG);
        
        if(litrosG > 0 && litrosG < 25){
          
            precoF = precoG * litrosG - (precoG * litrosG * 0.03); 
            printf("Preço: %.2f", precoF);
            
        } else {
            
            precoF = precoG * litrosG - (precoG * litrosG * 0.05);   
            printf("Preço: %.2f", precoF);
            
        }
    
    }
    
    return 0;
}

