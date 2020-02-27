  
/*Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade.*/

#include <stdio.h>

int main()
{
     int i, array[10], contador = 0; 
    
    for(i = 0; i <= 9; i++){
        
        array[i] = i;
        printf("\narray[%d] = %d", array[i], i);
        
        if(i%2 == 0 && i != 0){
            
        contador++; 
        
        }
    }
    
    printf("\n\nHá %d elementos pares no array.", contador);

    return 0;
}
