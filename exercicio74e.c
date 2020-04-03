/*Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve
fornecer as seguintes operações:
a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM_ARRAY = 30, i, j, k, array[TAM_ARRAY];
    int final, posInsert, posRemove, igual;
    int contador = 0, armazena = 0, tamanho = 0;

    //e. Gerar um novo array sem duplicidades a partir deste array
    
    for(i = 0; i < TAM_ARRAY; i++){
	    
	    array[i] = rand() % 30;
	    
	}
    
    printf("\nArray sem duplicidades:\n");
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        for(j = i + 1; j < TAM_ARRAY; j++){
            
            if(array[i] == array[j]){
                
                for(k = j; k < TAM_ARRAY; k++){
                    
                    array[k] = array[k + 1];
                }

                TAM_ARRAY--;//diminuir o tamanho da lista depois de jogar o elemento repetido no array fantasma

                j--;//não incrementar o j se houver troca. senão pode ocorrer de um elemento repetido ser pulado
            }
        }
    }


    printf("\nArray sem duplicidade: ");
    for(i = 0; i < TAM_ARRAY; i++){
        
        printf("%d ", array[i]);
        
    }
    
    return 0;
}
