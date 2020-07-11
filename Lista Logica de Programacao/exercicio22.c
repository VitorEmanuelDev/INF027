//Escreva um programa que leia um número e exiba o seu módulo sem usar abs()


#include <stdio.h>

int main()
{
    int numero, absoluto;
    
    printf("Informe um número\n");
    scanf("%d", &numero);
    
    if (numero > 0){
        
        printf("O valor absoluto %d é |%d|.",numero, numero);
        
    } else {
        
        absoluto = numero * -1;
        
        printf("O valor absoluto %d é |%d|.", numero, absoluto);
        
    }

    return 0;
}

