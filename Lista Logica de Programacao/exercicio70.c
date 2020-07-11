/*Escreva um programa que carregue um array com tamanho variável. O tamanho máximo
do array é de 100 posições (carga de array com sentinela).*/

#include <stdio.h>

int main()
{
    int i, array[100] = {};
    
    for(i = 0; i < 100; i++){
        
        array[i] = i;
        printf("%d ", array[i]);
        
    }
    
    return 0;
}

