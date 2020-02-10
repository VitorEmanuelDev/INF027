/*Escreva um programa em linguagem C que escreva todos os números pares
compreendidos na seguinte sequencia: 10 até 20. Para tal, utilize a estrutura de
repetição...

a) Para...variando
b) Repita...até
c) Enquanto...faça*/

#include <stdio.h>

int main()
{
    int contador;
    
    for (contador = 10; contador <= 20; contador++){
        
        if (contador%2 == 0){
            
            printf("%d ", contador);
            
        }
        
    }
    
    contador = 10;
    
    while (contador <= 20){
        
        if (contador%2 == 0){
            
            printf("%d ", contador);
            
        }
        
        contador++;
        
    }
    
    contador = 10;
    
    do{
        
        if (contador%2 == 0){
            
            printf("%d ", contador);
            
        }
        
        contador++;
        
    }while(contador <= 20);

    return 0;
}

