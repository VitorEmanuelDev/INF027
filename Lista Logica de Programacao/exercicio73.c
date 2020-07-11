/*
Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 30

int main()
{
    int i, j, moda, contaModa, atual, contaAtual, armazena, array[TAM_ARRAY];
    float media, soma = 0, mediana = 0;
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        array[i] = rand() % 100;
        
    }
    
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
    
    for(i = 0; i < TAM_ARRAY; i++){
        
        printf("%d ", array[i]);
        
    }
    
    //somar os valores do array
    for(i = 0; i < TAM_ARRAY; i++){
        
        soma += array[i];
        //printf("%d ", soma);
        
    }
    
    //determinar a moda do array
    contaModa = 0;
    
	for(i = 0; i < TAM_ARRAY; i++){
	    
	  atual = array[i]; 
  	  contaAtual = 0;
  	  
	  while(atual == array[i]){
	      
	    i++;  
	  	contaAtual++;
	  	
	  }	
	  
	  if(contaAtual > contaModa){
	      
	  	contaModa = contaAtual;
	  	moda = atual;
	  	
	  }
	  
	}

    //calculo da mediana
    if(TAM_ARRAY%2 == 0){
        
        mediana = (array[(TAM_ARRAY/2) - 1] + array[(TAM_ARRAY/2) + 1]) / 2.0;

    } else{ 
        
        mediana = array[TAM_ARRAY/2];
        
    }
    
    
    media = soma/TAM_ARRAY;
    
    printf("\nMédia: %.2f\n", media);
    
    printf("Mediana: %.2f\n", mediana);
    
    printf("Moda: %d", moda);
    
    return 0;
}
