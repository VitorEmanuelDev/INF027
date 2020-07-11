/*Escreva um programa que ordene um array de inteiros de 15 posições utilizando o
método da bolha (bubble sort).*/

#include <stdio.h>
#define TAM_ARRAY 15

int main()
{
    int i, j, armazena, array[TAM_ARRAY] = {14,10,13,12,1,0,5,8,9,7,4,6,2,11,3};
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        for(j = i + 1; j < TAM_ARRAY; j++){
         
            if(array[i] > array[j]){
               
               armazena = array[i];
               array[i] = array[j];
               array[j] = armazena;
                
            } 
            
        }
    
    }
    
    for(j = 0; j < TAM_ARRAY; j++){
        
        printf("%d ", array[j]);
        
    }

    return 0;
}
