/*Escreva um programa que imprima todos
os números inteiros de 100 a 1 (em ordem decrescente).*/
#include <stdio.h>

int main()
{
    int i = 100;
    
    while(i > 0){
        
        printf("%d\n", i);
        i -= 1; 
        
    }

    return 0;
}
