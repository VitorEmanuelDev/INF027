/*Escreva um programa em C, que leia uma string e um caracter e conte o número de
ocorrências do caracter lido na string.*/

#include <stdio.h>
#include <string.h>
#define TAM_ARRAY 50

int main() {
    
    char palavra[TAM_ARRAY], letra;
    int i, contador = 0;

    printf("Informe uma palavra:\n");
    fgets(palavra, TAM_ARRAY, stdin);

    printf("Informe uma letra:\n");
    scanf("%c", &letra);

    for (i = 0; palavra[i] != '\0'; i++) {
        if (letra == palavra[i])
            contador++;
    }

    printf("A frequencia de '%c' na palavra '%s' é de %d vezes.", letra, palavra, contador);
    
    return 0;
}
