/*Escreva um programa em C, que gere a substring de uma string original, dada a posição
inicial e a final da substring.*/

#include <stdio.h>
#include <string.h>
#define TAM_ARRAY 200

int main(){
    
   char frase[TAM_ARRAY], palavra[TAM_ARRAY];
   int i, inicio, fim;
 
   printf("Informe uma frase:\n");
   fgets(frase, TAM_ARRAY, stdin);
 
   printf("Informe a posição da palavra que deseja extrair:\n");
   scanf("%d", &inicio);
     
   printf("Informe quantas letras a palavra que deseja extrair tem:\n");
   scanf("%d",&fim);
   
 
    for(i = 0; i < fim; i++) {
      
      palavra[i] = frase[inicio + i];
     
    }
   
   palavra[i] = '\0'; // sem colocar essa parte haverá lixo de memória
   
   printf("%s", palavra);
   
   return 0;
}



