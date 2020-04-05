/*Um número primo é um número que possui somente dois divisores: ele mesmo e o
número 1. Um número primo p é um número primo de Chen se o próximo número
ímpar (p + 2) é primo ou o produto de dois primos (subprimo).
Escreva um programa em C, que leia um número e verifique se ele é um número primo
de Chen. Por exemplo,
2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2).
3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i, j, numero, divisoes = 0, divisoesChen = 0;
    
    printf("Informe um número limite.\n");
    scanf("%d", &numero);
    
    /*for(i = 1; i <= numero; i++){
                 
        if(numero % i == 0){
            
            divisoes++;
           
        } 
        
    }*/
    
    for(i = 1; i <= numero + 2; i++){
                 
        if((numero + 2) % i == 0){
            
            divisoesChen++;
           
        } 
        
    }
    
    if(divisoesChen == 2){
        
        printf("O número %d é primo de Chen.", numero);
        
    }else{
        
        printf("O número %d não é primo de Chen.", numero);
        
    }


    return 0;
}
