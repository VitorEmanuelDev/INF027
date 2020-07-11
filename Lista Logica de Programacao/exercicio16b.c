//Escreva um programa para gerar o invertido de um número (exemplo: o invertido de 498 é 894).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// usar a função abs() caso o número informado seja negativo

int main()
{   
    int num, resto, soma = 0, teste, contador = 0;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    teste = num;
    
    for(contador = 0; teste > 0; contador++){
        
        resto = teste % 10;
        teste = teste / 10;
        
    }
    
    //printf("%d", contador);
    
    for(int i = contador - 1; i >= 0; i--){
        
        resto = num % 10;
        resto = resto * pow(10, i);
        num = num / 10;
        soma += resto;

    }
       
    printf("%d", soma); 
    
    return 0;
}

