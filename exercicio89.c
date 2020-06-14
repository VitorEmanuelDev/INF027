/*Escreva um programa em C, que gere uma string composta pelo último nome, seguido de
virgula e as iniciais dos demais nomes (em ordem), seguida de ponto. Por exemplo, se a
string entrada for “Gabriel Garcia Marquez”, a string gerada deve ser “Marquez, G. G.”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

int main()
{   
    char nome[size], reverse[size], sobrenome[size], assinatura[size], iniciais[size];
    int i, j, contador, espacos;
    
    printf("Informe o seu nome:\n");
    fgets(nome, size, stdin);
    
    i = 0;
    espacos = 0;
    
    while(nome[i] != '\0'){
        
        if(nome[i] == ' '){
            
            espacos++;
            
        } 
        
        i++;
        
    }
    
    //Hardcode the first initial
    iniciais[0] = nome[0];
    iniciais[1] = '.';
    iniciais[2] = ' ';
    //int teste = 0;
    
    //Iterate the string to find and isolate each initial whenever the loop finds a space
    for(j = 0, i = 0; j < strlen(nome); j++){
        
        //printf("%c", nome[j]);//teste
        if(nome[j] == ' '){
            
            iniciais[i+3] = nome[j+1];
            iniciais[i+4] = '.';
            iniciais[i+5] = ' ';
            
            i += 3;
            
            //teste++;
            
        }
        
    }
    
    //printf("%i", teste);
        
    //printf("%s", iniciais);//teste  
    
    //printf(nome);//teste
    
    i = strlen(nome) - 1;
    j = 0;
    contador = 0;
    
    //Iterate through the string from the end of it in order to store the last name in reverse 
    while(nome[i] != ' '){
        
        reverse[j] = nome[i];
        //printf("%c", nome[i]);//teste
        
        i--;
        j++;
        contador++;
     
    }
    
    j = contador - 1;
    i = 0;
    
    //Put the last name into the right order
    while(j > 0){
        
        //printf("%c", reverse[j]);//teste
        sobrenome[i] = reverse[j];
        //printf("%c", sobrenome[i]);//teste
        
        j--;
        i++;
        
    }
    
    sobrenome[i] = ',';
    sobrenome[i+1] = ' ';
    sobrenome[i+2] = '\0';
    
    
    i = 0;
    
    //Store all the initials, but the one that refers to the last name into a new array of characters
    
    if(espacos == 2){
        
        while(i < strlen(iniciais) - 5){
            
            assinatura[i] = iniciais[i];
            
            i++;
            
        }
        
    }else{
        
        while(i < strlen(iniciais) - 3){
            
            assinatura[i] = iniciais[i];
            
            i++;
            
        }
        
    }
    
    assinatura[i] = '\0';
    
    
    //Concatenate the two strings by first initializing the one that will show first inthe screen output 
    
    for (i = 0; sobrenome[i] != '\0'; i++);//this loop is needed to initialize the string, and include the hardcoded comma and space
    
    for (j = 0; assinatura[j] != '\0'; j++){
        
        sobrenome[i+j] = assinatura[j];
        
    }
    
    sobrenome[i+j] = '\0';

    printf("\n%s", sobrenome);  
    
    return 0;
    
}

