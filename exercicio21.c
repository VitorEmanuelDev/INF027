//Escreva um programa que leia um número e exiba se ele é positivo ou negativo


#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe um número\n");
    scanf("%d", &numero);
    
    if (numero > 0){
        
        printf("O número %d é positivo", numero);
        
    } else {
        
        printf("O número %d é negativo", numero);
        
    }

    return 0;
}

