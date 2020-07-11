/*Faça um programa em C que coloque uma palavra informada pelo usuário em letras maiúsculas*/

#include <stdio.h>
#include <string.h>
#define TAM_ARRAY 100

 int main()
 {
     char string[TAM_ARRAY];
     int i = 0;

    puts("Informe uma palavra:\n"); 
    fgets(string,TAM_ARRAY,stdin);

    for(i = 0; string[i] != '\0'; i++){
        
        if(string[i] >= 'a' && string[i] <= 'z'){
            
           string[i] -= 32;  //s[i] = s[i] - 32
           
        }

     }

     puts(string); 
   
     return 0;
 }
