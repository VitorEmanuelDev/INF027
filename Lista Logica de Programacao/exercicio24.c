//Escreva um programa que leia três números e mostre o maior entre eles.

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Insira três números.\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    if (num1 > num2 && num1 > num3){
        
        printf("O maior número é %d.\n", num1);
        
    } else if(num2 > num1 && num2 > num3){
        
        printf("O maior número é %d.\n", num2);
        
    } else {
        
        printf("O maior número é %d.\n", num3);
        
    }

    return 0;

}

