/*Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições.*/

#include <stdio.h>

int main()
{
    int i, array[20], menor, maior, posMaior, posMenor;
    
    //printf("Informe os valores de cada elemento do array.\n");
    
    for(i = 0; i < 20; i++){
        
        //scanf("%d", &array[i]);
        array[i] = i;
        
    }
    
    maior = array[0];
    posMaior = 0;
    
    for(i = 0; i < 20; i++){
     
     if(array[i] > maior){
         
         maior = array[i];
         posMaior = i;
         
        }   
        
    }
    
    menor = array[0];
    posMenor = 0;
    
    for(i = 0; i < 20; i++){
     
     if(array[i] < menor){
         
         menor = array[i];
         posMenor = i;
         
        }   
        
    }
    
    printf("O maior número do array é: %d na posição [%d]\n", maior, posMaior);
    printf("O menor número do array é: %d na posição [%d]\n", menor, posMenor);

    return 0;
}






