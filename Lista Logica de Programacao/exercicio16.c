//Escreva um programa para gerar o invertido de um número com três
//algarismos (exemplo: o invertido de 498 é 894).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// usar a função abs() caso o número informado seja negativo

int main()
{   
    int num, resto, soma = 0;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    for(int i = 2; i >= 0; i--){
        
    resto = num % 10;
    resto = resto * pow(10, i);
    num = num / 10;
    soma += resto;
    
    }
       
    printf("%d", soma); 
  
    return 0;
}

