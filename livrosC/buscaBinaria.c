/*Escrever em C uma sub-rotina de busca binária por um elemento em um arranjo ordenado*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, valor, array[30], armazena = 0;
    
    for(i = 0; i <= 30; i++){
        
        array[i] = rand() % 99;
        //printf("%d ", array[i]);
        
    }
    
    for(i = 0; i < 30; i++){
        
        for(j = i + 1; j < 30; j++){
        
            if(array[i] > array[j]){
               
                armazena = array[i];
                array[i] = array[j];
                array[j] = armazena;
            
            }  
        
        }
        
    }
    
    for(i = 0; i < 30; i++){
        
        printf("%d ", array[i]);
        
    }
    
    
    //printf("\nQual valor do array deseja mostrar?\n");
    //scanf("%d", &valor); 

    return 0;
}
