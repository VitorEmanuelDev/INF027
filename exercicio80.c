/*Escreva um programa em C que leia duas strings e informe se a primeira contém a
segunda.*/

#include <stdio.h>
#include <string.h>


int main()
{
    	int size = 30;
	char str[size], substr[size];
	char *existe = strstr(str, substr);
	
	printf("Escreva uma frase ou palavra:\n");
	fgets(str, size, stdin);
	
	printf("Escreva uma palavra ou letras:\n");
	fgets(substr, size, stdin);

	if (existe != NULL){
	    
		printf("'%s' contém '%s'\n", str, substr);
		
	}else{
	    
		printf("'%s' não contém '%s'\n", str, substr);
		
	}

	return 0;
	
}
