/*Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve
fornecer as seguintes operações:

a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array*/

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 30

int main()
{
    int i, j, k, array[TAM_ARRAY] = {0,4,5,7,8,9,6,3,2,1,4,5,8,9,7,6,5,3,4,8,7,9,8,5,2,4,1,0,3,0};
    int final, posInsert, posRemove, igual;
    int contador = 0, armazena = 0, tamanho = 0, arrayNovo[] = {};

    //e. Gerar um novo array sem duplicidades a partir deste array
    
    printf("\nArray sem duplicidades:\n");
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        for(j = i + 1; j < TAM_ARRAY; j++){
            
            if(array[i] > array[j]){
                
                armazena = array[i];
                array[i] = array[j];
                array[j] = armazena;
              
               
            }
            
        }
        
    }
    
    for(j = 0; j < TAM_ARRAY - 1; j++){
        
        //printf("%d ", array[i]);
        if(array[j] != array[j + 1]){
            
            arrayNovo[k] = array[j];
            k++;
            tamanho++;
        }
        
    }
    
    arrayNovo[k] = arrayNovo[tamanho];
    
    for(k = 1; k < tamanho; k++){
        
        printf("%d ", arrayNovo[k]);
        
    }
    
    
    return 0;
}

