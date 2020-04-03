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

    printf("\nInforme um valor a ser deletado do array\n");
    scanf("%d", &igual);
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        if(array[i] == igual){
            
            for(k = i; k < TAM_ARRAY; k++){
                
                array[k] = array[k + 1];
            }
            
            TAM_ARRAY--;//diminuir o tamanho da lista depois de jogar o elemento repetido no array fantasm
            
            i--;//não incrementar o j se houver troca. senão pode ocorrer de um elemento repetido ser pulado
            
        }
        
    }
    
    for(i = 0; i <= TAM_ARRAY; i++){
        
        printf("%d ", array[i]);    
        
    }
    
        return 0;
}
