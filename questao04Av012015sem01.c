/*
Questão IV
  
Escreva um programa em C, que leia duas sequencias de	
três números correspondendo a idade em anos, meses e	
dias de duas pessoas.

O programa deve verificar e imprimir qual das duas pessoas	
(a primeira ou a segunda) é mais velha ou se elas possuem	
a mesma idade.

Por exemplo, se os valores lidos forem 8 anos, 4 meses e	
2 dias para primeira pessoa e 8 anos, 3 meses e 15 dias	
para a segunda; o programa deve imprimir:

“A primeira pessoa é mais velha”.	
 	
*/

#include <stdio.h>

int main()
{
    int anos1, meses1, dias1, anos2, meses2, dias2; 
    
    printf("Informe as duas idades em anos, meses e dias.\n");
    scanf("%d%d%d%d%d%d", &anos1, &meses1, &dias1, &anos2, &meses2, &dias2);
    
    if (meses1 > 12 || meses2 > 12 || dias1 > 365 || dias2 > 365){
        
        printf("Número inválido.");
        
    } else if (anos1 > anos2) {
        
        printf("A primeira pessoa é mais velha.");
        
    } else if (anos2 > anos1){
        
        printf("A segunda pessoa é mais velha.");
        
    } else if (anos1 == anos2 && meses1 > meses2){
        
        printf("A primeira pessoa é mais velha.");
        
    } else if (anos1 == anos2 && meses2 > meses1){
        
        printf("A segunda pessoa é mais velha.");
        
    } else if (anos1 == anos2 && meses2 == meses1 && dias1 > dias2){
        
        printf("A primeira pessoa é mais velha.");
        
    } else if (anos1 == anos2 && meses2 == meses1 && dias2 > dias1){
        
        printf("A primeira pessoa é mais velha.");
        
    } else if (anos1 == anos2 && meses2 == meses1 && dias2 == dias1){
        
        printf("As duas pessoas têm a mesma idade.");
        
    }

    return 0;
}
