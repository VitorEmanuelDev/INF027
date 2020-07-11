
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
    
    for(i = 0; i <= TAM_ARRAY; i++){
	    
	    array[i] = rand() % 30;
	    printf("%d ", array[i]);
	    
	}

    //c. Remover um elemento de uma posição indicada
    
    printf("\nInforme uma posição a ser deletada.\n");
    scanf("%d", &posRemove);
    
    
    for(i = posRemove; i < TAM_ARRAY; i++){
    
        array[i] = array[i + 1];
        
    }
    
    
    for(i = 0; i <= TAM_ARRAY - 1; i++){
        
        printf("%d ", array[i]);    
        
    }
    
    return 0;
}
