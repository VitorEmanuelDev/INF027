/*Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h> 
#define TAM_ARRAY 100

int main()
{
    char frase[TAM_ARRAY], palavra[TAM_ARRAY];
    int i, j, inicio, fim;
    
    printf("Escreva uma frase.\n");
    fgets(frase, TAM_ARRAY, stdin);
    
    printf("Escreva uma palavra.\n");
    fgets(palavra, TAM_ARRAY, stdin);
    
    for(i = 0; frase[i] < '\0'; i++){
        
        if(palavra[0] == frase[i]){
            
            for(j = 1; palavra[j] != '\0' && frase[j + 1] != '\0'
            || palavra[j] == frase[j + 1]; j++){
                
                
            }
            
            if(palavra[j] == '\0'){
                
                printf("%d", i + 1);
                
            }
            
        }
        
    }

    return 0;
}

