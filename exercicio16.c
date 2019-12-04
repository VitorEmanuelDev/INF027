//Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// usar a função abs() caso o número informado seja negativo

int main()
{   
    int num, resto;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    while(num > 0){
        
    resto = num % 10;
    num = num / 10;
    
    printf("%d", resto);
    
        }
        
    num++;
    
    return 0;
}
