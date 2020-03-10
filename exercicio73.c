/*
Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/
#include <stdio.h>
#define TAM_ARRAY 20

int main()
{
    int i, j, moda, armazena, contador = 0, array[] = {18,19,112,12,12,15,16,9,8,9,19,12,1,15,18,20,20,11,12,18};
    float media, soma = 0, mediana;
    
    //ordenar array
    for(i = 0; i < TAM_ARRAY; i++){
        
       for(j = i + 1; j < TAM_ARRAY; j++){
           
           if(array[i] > array[j]){
               
                armazena = array[i];
                array[i] = array[j];
                array[j] = armazena;
               
           }
           
       }
        
    }
    
    //somar os valores do array
    for(i = 0; i < TAM_ARRAY; i++){
        
        soma += array[i];
        //printf("%d ", soma);
        
    }
    
    //determinar a moda do array
    for (i =  0; i < TAM_ARRAY; i++){
        
        for(j = 0; j < TAM_ARRAY; j++){
            
            
            
        }
        
    }

    //calculo da mediana
    if(TAM_ARRAY%2 == 0){
        
        mediana = array[TAM_ARRAY/2] + array[(TAM_ARRAY/2) - 1];
        
    } else{ 
        
        mediana = array[TAM_ARRAY/2] + 1;
        
    }
    
    
    media = soma/20;
    printf("Média: %.2f\n", media);
    
    printf("Mediana: %.2f\n", mediana);
    
    //printf("Moda: %d", moda);
    
    return 0;
}
