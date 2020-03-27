/*6-Preencher um vetor com números inteiros (8 unidades); solicitar um número do teclado.
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não
existir, imprimir MSG que não existe.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM_ARRAY 8

int main()
{
    char array[TAM_ARRAY];
    int numero, i;
    
    printf("Informe um número a ser buscado.\n");
    scanf("%d", & numero);
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        array[i] = rand() % 9;
        
        if(numero == array[i]){
            
            printf("Posição: %d", i);
            break;
            
        }
        
    }

    if(numero != str[i]){
        
        printf("O número informado não existe");
        
    }

    return 0;
}
