/*Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou
-1 caso o valor não ocorra no vetor (Busca Sequencial).*/


#include <stdio.h>
#define TAM 12

int main()
{
    int array[] = {-7, -1, 0, 3, 4, 6, 10, 16, 23, 88, 104, 1000};
    int elemento, posicao, i;
    
    printf("Informe o elemento a ser buscado:\n");
    scanf("%d", &elemento);
    
    posicao = -1;
    
    for(i = 0; i < TAM && posicao == -1; i++){
        
        if(array[i] == elemento){
            
            posicao = i;
            printf("Posição a partir de '0': %d\n", posicao);
            break;
            
        }
    }
    
    if(posicao == -1){
        
        printf("%d não está no array.", elemento);
        
    }
    
    return 0;
}

