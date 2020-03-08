/*Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array.*/


#include <stdio.h>

int main()
{
    int i, array[20], menor, maior;
    
    //printf("Informe os valores de cada elemento do array.\n");
    
    for(i = 0; i < 20; i++){
        
        array[i] = i;
        
    }
    
    maior = array[0];
    
    for(i = 0; i < 20; i++){
     
     if(array[i] > maior){
         
         maior = array[i];
         
        }   
        
    }
    
    menor = array[0];
    
    for(i = 0; i < 20; i++){
     
     if(array[i] < menor){
         
         menor = array[i];
         
        }   
        
    }
    
    printf("O maior número do array é: %d\n", maior);
    printf("O menor número do array é: %d\n", menor);

    return 0;
}

