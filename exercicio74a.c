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
    int continuar = 0;
    
    //a. Inserir um elemento no final do vetor
    
    for(i = 0; i <= TAM_ARRAY; i++){
	    
	    array[i] = rand() % 30;
	    printf("%d ", array[i]);
	    
	}
    
    printf("\nInforme o novo elemento final.\n");
    scanf("%d", &final);
    
    array[TAM_ARRAY] = final;
    
    for(i = 0; i <= TAM_ARRAY; i++){
        
        printf("%d ", array[i]);
    }
}

