/*Escreva um programa que leia um vetor de 10 posições ordenados de
inteiros e um inteiro. O programa deve informar a primeira posição 
onde este inteiro ocorre no vetor ou -1 caso o valor não ocorra no
vetor (Busca Binária).*/

#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    
    int menor = 0, maior = 10;
    int array[] ={0,1,2,3,4,5,6,7,8,9};
    int elemento;
    int meio;
    int posicao = -1;
    
    printf("informe um número:\n");
    scanf("%d", &elemento);
    
    while(menor <= maior && posicao == -1){
        
        meio = ((maior - menor)/2) + menor;
        
        if(elemento == array[meio]){
            
            posicao = meio;
            
        } else if(array[meio] < elemento){
            
            menor = meio + 1;
            
        } else {
            
            maior = meio - 1;
            
        }
        
    }
    
    printf("Posição: %d", posicao);
    
}
    


