/*Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor.*/

#include <stdio.h>

int main()
{
    int i, array1[10], array2[10], array3[2], maior1, maior2;
    
    printf("Informe os valores de cada elemento do array1.\n");
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &array1[i]);
        //array1[i] = i;
        
    }
    
    printf("Informe os valores de cada elemento do array2.\n");
    
    for(i = 0; i < 10; i++){
        
        scanf("%d", &array2[i]);
        //array2[i] = i;
        
    }
    
    maior1 = array1[0];
    maior2 = array2[0];
    
    for(i = 0; i < 10; i++){
     
        if(array1[i] > maior1){
            
            maior1 = array1[i];
         
        }   
        
        if(array2[i] > maior2){
            
            maior2 = array2[i];
         
        }   
        
    }
    
    for(i = 0; i < 2; i++){
        
        array3[0] = maior1;
        array3[1] = maior2;
        
    }
    
    printf("array3[%d, %d]", array3[0], array3[1]);
    

    return 0;
}
