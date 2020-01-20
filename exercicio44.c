/*Escreva um programa que imprima todos os
números de 1 até 100 e a soma de todos eles.*/
#include <stdio.h>

int main()
{
    int i = 1, soma = 0;
    
    while(i <= 100){
        
        printf("%d\n", i);
        soma += i;
        i++;
       
    }
    
    printf("soma = %d", soma);

    return 0;
}
