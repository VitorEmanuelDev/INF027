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
    
    //b. Inserir um elemento em uma dada posição
    
    printf("\nInforme um elemento e uma posição para inseri-lo.\n");
    scanf("%d%d", &posInsert, &i);
    
    if(i < 0 || i > TAM_ARRAY){
        
        printf("Posição inválida.");
        
    }
    
    array[i] = posInsert;
    
    for(i = 0; i <= TAM_ARRAY; i++){
    
        printf("%d ", array[i]);
    
    }
    
    return 0;
}
