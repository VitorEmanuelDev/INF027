//Escreva um programa que leia um número e exiba o seu módulo


#include <stdio.h>

int main()
{
    int numero, absoluto;
    
    printf("Informe um número");
    scanf("%d", &numero);
    
    if (numero > 0){
        
        printf("O valor absoluto %d é |%d|.", numero);
        
    } else {
        
        absoluto = numero * -1;
        
        printf("O valor absoluto %d é |%d|.", numero, absoluto);
        
    }

    return 0;
}
