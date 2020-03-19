/*Escreva um programa em C, que leia uma string, gere uma nova string com o texto
invertido e imprima esta nova string.*/


#include <stdio.h>
#include <string.h>
#define TAM_ARRAY 100

int main()
{
    int i;
    char palavra[TAM_ARRAY];
    
    printf("Informe uma palavra:\n");
    fgets(palavra, TAM_ARRAY, stdin);

    for(i = strlen(palavra); i >= 0; i--){
        
        printf("%c", palavra[i]);
        
    }
    
    //puts(palavra);

    return 0;
}
