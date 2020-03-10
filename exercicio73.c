/*
Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/
#include <stdio.h>

int main()
{
    int i, j, soma = 0, media, mediana, moda, contador, array[] = {0,1,2,3,4,5,6,7,8,9,10,12,15,15,18,19,20,11,13,18};
    
    for(i = 0; i < 20; i++){
        
        soma += array[i];
        //printf("%d ", soma);
        
    }
    
    for (i =  0; i < 20; i++){
        
        for(j = 0; j < 20; j++){
            
            if(array[i] == array[i + 1]){
                
                moda = array[i];
                
            }
        }
    }
    
    media = soma/20;
    printf("Média: %d\n", media);
    
    mediana = (array[9] + array[10])/2;
    printf("Mediana: %d\n", mediana);
    
    printf("Moda: %d", moda);
    
    return 0;
}
