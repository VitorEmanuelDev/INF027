#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, tmp; 
    
    printf("Valor de a: \n");
    scanf("%d", &a);
    
    printf("Valor de b: \n");
    scanf("%d", &b);
    
    printf("Antes da permutação: \n");
    printf("a = %d , b = %d \n", a, b);
    
    //Permutação
    
    tmp = a;
    
    a = b;
    
    b = tmp;
    
    printf("Depois da permutação: \n");
    printf("a = %d , b = %d \n", a, b);

    return 0;
}
