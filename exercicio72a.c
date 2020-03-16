/*Escreva um programa que leia um vetor de 10 posições ordenados de
inteiros e um inteiro. O programa deve informar a primeira posição 
onde este inteiro ocorre no vetor ou -1 caso o valor não ocorra no
vetor (Busca Binária).*/

#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    
    int i, meio, valorMenor = 0, valorMaior = 10, array[] ={0,1,2,3,4,5,6,7,8,9}, elemento, posicao = -1;
    
    printf("informe um número:\n");
    scanf("%d", &elemento);
    
    for(i = 0; valorMenor <= valorMaior && posicao == -1; i++){
        
        meio = ((valorMaior - valorMenor)/2) + valorMenor;
        
        if(elemento == array[meio]){
            
            posicao = meio + 1;
            
        } else if(array[meio] < elemento){
            
            valorMenor = meio + 1;
            
        } else {
            
            valorMaior = meio - 1;
            
        }
        
    }
    
    printf("Posição: %d", posicao);
    
}
    
