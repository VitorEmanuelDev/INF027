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
    int i, j, contador;
    
    printf("Informe o seu nome:\n");
    fgets(nome, size, stdin);
    
    
    iniciais[0] = nome[0];
    iniciais[1] = '.';
    iniciais[2] = ' ';
    //int teste = 0;
    
    for(j = 0, i = 0; j < strlen(nome); j++){
        
        //printf("%c", nome[j]);
        if(nome[j] == ' '){
            
            iniciais[i+3] = nome[j+1];
            iniciais[i+4] = '.';
            iniciais[i+5] = ' ';
            
            i += 3;
            
            //teste++;
            
        }
        
    }
    
    //printf("%i", teste);
    
    
        
    //printf("%s", iniciais);
        
    
    //printf(nome);
    i = strlen(nome) - 1;
    j = 0;
    contador = 0;
    
    while(nome[i] != ' '){
        
        reverse[j] = nome[i];
        //printf("%c", nome[i]);
        
        i--;
        j++;
        contador++;
     
    }
    
    j = contador - 1;
    i = 0;
    
    while(j > 0){
        
        //printf("%c", reverse[j]);
        sobrenome[i] = reverse[j];
        //printf("%c", sobrenome[i]);
        
        j--;
        i++;
        
    }
    
    sobrenome[i] = '\0';
    
    i = 0;
    //contador = 0;
    
    while(i < strlen(iniciais) - 3){
        
        assinatura[i] = iniciais[i];
        
        i++;
        //contador++;
        
    }
    
    assinatura[i] = '\0';
    
    strcat(assinatura, sobrenome);

    printf("%s", assinatura);  
    
    return 0;
    
}
