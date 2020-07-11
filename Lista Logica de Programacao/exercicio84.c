/*Escreva um programa em C que verifique se uma string normalizada é palíndrome (os
mesmos caracteres quando lida da direita para a esquerda).*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 50

int main()
{
	char str[size], strNorm1[size], strNorm2[size];
	int i, j = 0, contador;
	bool palindromo = true;
	
	printf("Escreva uma frase:\n");
	fgets(str, size, stdin);
	
    for(i = 0; str[i] != '\0'; i++){
        
        //printf("%c", str[i]);
        
        if(str[i] != ' '){
            
            strNorm1[j] = str[i];
            j++;
            
        }
        
    }
    
    strNorm1[j] = '\0'; 
    
    //printf("%s", strNorm1);
    
    for(j = 0, contador = 0; strNorm1[j] != '\0'; j++){
        
        contador++;
        strNorm2[j] = strNorm1[j];
        //printf("%c",strNorm[j]);
        
    }
    
    //printf("%d", contador);
    
    //for(j = contador - 1; strNorm2[j] >= 0; j--){
    //    
    //    printf("%c",strNorm2[j]);
    //    
    //}
    
    
    for(i = 0; strNorm1[i] != '\0' && strNorm2[i] != '\0'; i++){
        
        if(strNorm1[i] != strNorm2[i]){
            
            palindromo = false;
            break;
            
        }
        
    }
    
    if(palindromo == true){
        
        printf("\n%s corresponde a %s ao contrário.", strNorm1, strNorm2);
        
    }else{
        
        printf("\n%s não corresponde a %s ao contrário.", strNorm1, strNorm2);
        
    }
    
    //if(strcmp(strNorm1, strNorm2) == 0){
    //    
    //    printf("\n%s corresponde a %s ao contrário.", strNorm1, strNorm2);
    //    
    //}
 
 return 0;
    
}
