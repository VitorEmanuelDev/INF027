/*Escreva um programa em C que leia duas string e informe se a primeira contém a
segunda.*/

#include <stdio.h>
#include <string.h>
#define size 50

int main()
{
	char str[size], substr[size];
	char *existe = strstr(str, substr);
	
	printf("Escreva uma frase ou palavra:\n");
	fgets(str, size, stdin);
	
	printf("Escreva uma palavra ou letras:\n");
	fgets(substr, size, stdin);

	if (existe != NULL){
	    
		printf("\n'%s' contem '%s'\n", str, substr);
		
	}else{
	    
		printf("\n'%s' não contém '%s'\n", str, substr);
		
	}

	return 0;
}
