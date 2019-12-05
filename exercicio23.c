//Escreva um programa que leia um número e imprima se este número é ou não par


#include <stdio.h>

int main()
{
    int numero, resto;
    
    printf("Informe um número\n");
    scanf("%d", &numero);
    
   resto = numero%2;
   
   if(resto == 0){
       
    printf("O número %d é par.", numero);
       
    } else {
    
    printf("O número %d é ímpar", numero);    
        
    }
       
    return 0;
}

