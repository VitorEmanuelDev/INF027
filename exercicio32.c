/*Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número). 

https://pt.wikipedia.org/wiki/ASCII

*/

#include <stdio.h>

int main()
{
    char caracter;
    
    printf("Informe um número ou uma letra ou um símbolo.\n");
    scanf("%c", &caracter);
    
   if(caracter >= '0' && caracter <= '9'){
       
       printf("O caracter escolhido é um número.");
       
    } else if ((caracter >= 'A' && caracter <= 'Z') ||
              (caracter >= 'a' && caracter <= 'z')){
             
             printf("O caracter escolhido é uma ");     
                  
                  if((caracter == 'A') ||
                     (caracter == 'E') ||
                     (caracter == 'I') ||
                     (caracter == 'O') ||
                     (caracter == 'U') ||
                     (caracter == 'a') ||
                     (caracter == 'e') ||
                     (caracter == 'i') ||
                     (caracter == 'o') ||
                     (caracter == 'u')) {
                         
                         printf("vogal.");
                         
                     } else {
                         
                         printf("consoante.");
                         
                     }
    } else {
        
        printf("O caracter escolhido é um símbolo.");
        
    }

    return 0;
}
