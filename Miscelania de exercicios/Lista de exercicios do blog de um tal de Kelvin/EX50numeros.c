/*Faça um algoritmo que leia um numero inteiro
e mostre uma mensagem indicando se este número 
é par ou impar, se é positivo ou negativo.*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    
    if (num >= 0){
        
        printf("O número %d é positivo", num);
        
    } else {
        
        printf("O número %d é negativo", num);
        
    }
    
    if (num%2 == 0){
        
        printf(" e é par.");
        
    } else {
        
        printf(" e é ímpar.");
        
    }

    return 0;
}
