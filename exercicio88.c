/*Escreva um programa em C, que coloque a string lida toda em caixa alta.*/


#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define size 30


int main() 
{ 
    
    int i = 0;

    char str[size], stra; 
    
    printf("Escreva uma frase.\n");
    fgets(str, size, stdin);
    
    //for(i = 0; str[i] != '\0'; i++) {
    //    
    //    stra = str[i]; 
    //    printf("%c", toupper(stra)); 
    // 
    //} 
    
    
  	for (i = 0; str[i] != '\0'; i++){
  	    
  		if(str[i] >= 'a' && str[i] <= 'z'){
  		    
  			stra = str[i] -32;
  			printf("%c", stra); 
  			
		}
  	}

    
    return 0; 
} 

