/*Escreva um programa em C que normalize uma string lida, em uma nova string.
Normalizar uma string é o processo de remover os espaços excedentes que separam as
palavras.*/

#include <stdio.h>
#include <string.h>
#define size 50

int main()
{
	char str[size], strNorm[size];
	int i, j = 0;
	
	printf("Escreva uma frase:\n");
	fgets(str, size, stdin);
	
    for(i = 0; str[i] != '\0'; i++){
        
        //printf("%c", str[i]);
        
        if(str[i] != ' '){
            
            strNorm[j] = str[i];
            j++;
            
        }
        
    }
    
    strNorm[j] = '\0'; 
    
    printf("%s", strNorm);
}
