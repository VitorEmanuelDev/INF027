//Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

#include <stdio.h>

int main()
{
    int num1, num2, num3, soma;
    
    printf("Insira três números.\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    if (num1 > num2 && num1 > num3){
        
        printf("O maior número é %d.\n", num1);
        
        if(num2 > num3){
            printf("O segundo maior número é %d.\n", num2);
            
            soma = num2 + num1;
            
            printf("A soma desses números é %d.\n", soma);
            
        } else {
            
            printf("O segundo maior número é %d.\n", num3);
            
            soma = num3 + num1;
            
            printf("A soma desses números é %d.\n", soma);
            
        }
        
    } else if(num2 > num1 && num2 > num3){
        
        printf("O maior número é %d.\n", num2);
        
        if(num1 > num3){
            printf("O segundo maior número é %d.\n", num1);
            
            soma = num2 + num1;
            
            printf("A soma desses números é %d.\n", soma);
            
        } else {
            
            printf("O segundo maior número é %d.\n", num3);
            
            soma = num3 + num2;
            
            printf("A soma desses números é %d.\n", soma);
            
        }
        
    } else {
        
        printf("O maior número é %d.\n", num3);
        
        if(num1 > num2){
            printf("O segundo maior número é %d.\n", num1);
            
            soma = num3 + num1;
            
            printf("A soma desses números é %d.\n", soma);
            
        } else {
            
            printf("O segundo maior número é %d.\n", num2);
            
            soma = num3 + num2;
            
            printf("A soma desses números é %d.\n", soma);
            
        }
        
    } 
    
    

    return 0;

}


