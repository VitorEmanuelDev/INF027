/*Escreva um programa em C, que dada uma string (normalizada... para quê?), imprima a maior palavra
dela.*/

#define size 100
#include <stdio.h>
#include <string.h>

int main() {
    
    char str[size], strNorm[size];
    int i, j = 0, inicio = 0, maior = 0, maiorPos = 0;
    
    printf("Escreva uma frase:\n");
	fgets(str, size, stdin);
	
	//encontra e separa a maior palavra
    for (i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ') {
            
            inicio = i + 1;
            
        } else {
            
            if (i - inicio > maior) {
                
                maior = i - inicio;
                maiorPos = inicio;
                
            }
        }
    }    
    
    //normaliza a string
    for(i = 0; str[i] != '\0'; i++){
        
        //printf("%c", str[i]);
        
        if(str[i] != ' '){
            
            strNorm[j] = str[i];
            j++;
            
        }
        
    }
    
    strNorm[j] = '\0'; 
    
    //verifica se a palavra que foi separada é uma
    char *existe = strstr(strNorm, str+maiorPos);
    
    if (existe != NULL){
        
        printf("A maior palavra da string '%s' é '%s'\n", strNorm, str+maiorPos);
        
    }
    
    //printf("%s", strNorm);
    
   // printf("A maior palavra da string, com %d letras, é '%s'.\n", maior, str + maiorPos);

    return 0;
}
