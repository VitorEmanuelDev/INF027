/*Escrever em C uma sub-rotina de busca binária por um elemento em um arranjo ordenado*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, tamanho = 30, inicio, meio, valor, array[tamanho], armazena = 0;
    
    for(i = 0; i <= tamanho; i++){
        
        array[i] = rand() % 99;
        //printf("%d ", array[i]);
        
    }
    
    for(i = 0; i < tamanho; i++){
        
        for(j = i + 1; j < tamanho; j++){
        
            if(array[i] > array[j]){
               
                armazena = array[i];
                array[i] = array[j];
                array[j] = armazena;
            
            }  
        
        }
        
    }
    
    for(i = 0; i < tamanho; i++){
        
        printf("%d ", array[i]);
        
    }
    
    
   printf("\nQual valor do array deseja mostrar?\n");
   scanf("%d", &valor); 
   
   meio = 0;
   inicio = 0;
   
   for(i = 0; inicio <= tamanho; i++){
       
        meio = (inicio + tamanho)/2;
       
        if (valor < array[meio]){
           
            tamanho = meio - 1;

           
        } else if (valor > array[meio]){
             
            inicio = meio + 1;
    
        } else if (valor == array[i]){
         
            printf("Valor %d encontrado na posição %d.", array[i], i);
            break;
         
        }
       
   }
   
    return 0;
}

