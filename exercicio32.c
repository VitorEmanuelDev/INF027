/*Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número
ou um símbolo (qualquer outro caracter, que não uma letra ou número).*/

#include <stdio.h>

int main()
{
    int i;
    char elemento [] = "abcdefghijklmnopqrstuvxz0123456789";
    
    printf("Informe um número ou uma letra ou um símbolo");
    scanf("%c", elemento);
    
    if(elemento == "a" || elemento == "e" || elemento == "i" 
    || elemento == "o" || elemento == "u") {
        
        printf("O caracter escolhido é uma vogal.");
        
    } /* else if (elemento != "a" || elemento != "e" || elemento != "i" 
    || elemento != "o" || elemento != "u"){
        
        printf("O caracter escolhido é uma consoante.");
        
    } else if( elemento[i] > 23){
        
        printf("O caracter escolhido é um número.");
        
    } else {
        
        printf("O caracter escolhido é um símbolo.");
        
    } */

    return 0;
}



