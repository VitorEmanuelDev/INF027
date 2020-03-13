/*
Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/
#include <stdio.h>
#define TAM_ARRAY 22

int main()
{
    int i, j, moda, contaModa, atual, contaAtual, armazena,
    array[] = {18,19,12,18,12,14,16,9,8,11,16,12,1,15,18,20,20,18,12,18,14,13};
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
        
        mediana = (array[(TAM_ARRAY/2) - 1] + array[(TAM_ARRAY/2) + 1])/2;
        
    } else{ 
        
        mediana = array[TAM_ARRAY/2] + 1;
        
    }
    
    
    media = soma/TAM_ARRAY;
    printf("Média: %.2f\n", media);
    
    printf("Mediana: %.2f\n", mediana);
    
    printf("Moda: %d", moda);
    
    return 0;
}
