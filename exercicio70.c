/*Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou
-1 caso o valor não ocorra no vetor (Busca Binária).*/


#include <stdio.h>
#define TAM 12

int main()
{
    int array[] = {-7, -1, 0, 3, 4, 6, 10, 16, 23, 88, 104, 1000};
    int elemento;
    int posicao;
    int contador;
    
    printf("Informe o elemento a ser buscado:\n");
    scanf("%d", &elemento);
    
    posicao = -1;
    
    for(contador = 0; contador < TAM && posicao == -1; contador++){
        
        if(array[contador] == elemento){
            
            posicao = contador;
            printf("Posição: %d\n", posicao);
            break;
            
        }
    }
    
    return 0;
}

