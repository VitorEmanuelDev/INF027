/*

Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve
fornecer as seguintes operações:

a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array

ps: vai haver segmentation fault por causa das modificações sucessivas no array... 
depois declaro um array para cada situação...

*/

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
	
	//a. Inserir um elemento no final do vetor
    
    printf("\nInforme o novo elemento final.\n");
    scanf("%d", &final);
    
    array[TAM_ARRAY] = final;
    
    for(i = 0; i <= TAM_ARRAY; i++){
        
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
    
    //c. Remover um elemento de uma posição indicada
    
    printf("\nInforme uma posição a ser deletada.\n");
    scanf("%d", &posRemove);
    
    
    for(i = posRemove; i < TAM_ARRAY; i++){
    
        array[i] = array[i + 1];
        
    }
    
    
    for(i = 0; i <= TAM_ARRAY - 1; i++){
        
        printf("%d ", array[i]);    
        
    }
    
    //d. Remover todos elementos iguais a um valor indicado
    
    printf("\nInforme um valor a ser deletado do array\n");
    scanf("%d", &igual);
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        if(array[i] == igual){
            
            for(k = i; k < TAM_ARRAY; k++){
                
                array[k] = array[k + 1];
            }
            
            TAM_ARRAY--;//diminuir o tamanho da lista depois de jogar o elemento repetido no array fantasma
            
            i--;//não incrementar o i se houver troca. senão pode ocorrer de um elemento repetido ser pulado
            
        }
        
    }
    
    for(i = 0; i <= TAM_ARRAY; i++){
        
        printf("%d ", array[i]);    
        
    }
    
    //e. Gerar um novo array sem duplicidades a partir deste array
    
    printf("\nAperte '1' para ver o array sem elementos duplicados.\n");
    scanf("%d", &continuar);
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        for(j = i + 1; j < TAM_ARRAY; j++){
            
            if(array[i] == array[j]){
                
                for(k = j; k < TAM_ARRAY; k++){
                    
                    array[k] = array[k + 1];
                    
                }

                TAM_ARRAY--;//diminuir o tamanho da lista depois de jogar o elemento repetido no array fantasm

                j--;//não incrementar o j se houver troca. senão pode ocorrer de um elemento repetido ser pulado
            }
        }
    }


    for(i = 0; i < TAM_ARRAY; i++){
        
        printf("%d ", array[i]);
        
    }

    
    return 0;
}



