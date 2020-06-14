/*Escreva um programa em C, que dado uma string, crie uma nova string contendo na
ordem em que aparecem no string dado, as vogais no começo e as consoantes no final.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

int main()
{
    char str[size], vogais[size], consoantes[size];
    int i, j, k;
    
    printf("Escreva alguma coisa aí, vá:\n");
    fgets(str, size, stdin);

    i = 0;
    j = 0;
    k = 0;
    
    while(i < strlen(str)){
        
        if(((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) &&
            (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
             str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
             str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
             str[i] == 'U')){
               
               vogais[j] = str[i];
               
               j++;
               
        }else if(((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) &&
                (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' ||
                 str[i] != 'o' || str[i] != 'u' || str[i] != 'A' ||
                 str[i] != 'E' || str[i] != 'I' || str[i] != 'O' ||
                 str[i] != 'U')){
               
               consoantes[k] = str[i];
               
               k++;
               
        }
        
        i++;    
    }
    
    vogais[j] = '\0';
    consoantes[k] = '\0';
    
    
    for(j = 0; vogais[j] != '\0'; j++);
    
    for(k = 0; consoantes[k] != '\0'; k++){
        
        vogais[j+k] = consoantes[k];
        
    }
    
    vogais[j+k] = '\0';
    
    printf("\n%s", vogais);
    
    return 0;

}
