/*Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais
existem nesta string.*/

#include <stdio.h>
#include <string.h>
#define TAM_ARRAY 100

 int main()
 {
     char palavra[TAM_ARRAY];
     int i, contador = 0;

    puts("Informe uma palavra:\n"); 
    fgets(palavra,TAM_ARRAY,stdin);

    for(i = 0; palavra[i] != '\0'; i++){
        
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i'
           || palavra[i] == 'o' || palavra[i] == 'u'){
            
            contador++;
           
        }

     }

     printf("%s tem %d vogais.", palavra, contador);
   
     return 0;
 }


