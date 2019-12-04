//Escreva um programa que permute o valor de duas variáveis inteiras.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, holder; 
    
    printf("Valor de a: \n");
    scanf("%d", &a);
    
    printf("Valor de b: \n");
    scanf("%d", &b);
    
    printf("Antes da permutação: \n");
    printf("a = %d , b = %d \n", a, b);
    
    //Permutação
    
    holder = a;
    
    a = b;
    
    b = holder;
    
    printf("Depois da permutação: \n");
    printf("a = %d , b = %d \n", a, b);

    return 0;
}
