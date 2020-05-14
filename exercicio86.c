/*Escreva um programa em C, que verifique se duas strings são iguais, independente da
caixa das letras. Por exemplo, este programa deve dizer que “Teste”é igual a “TeStE”.*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define size 30


int main() 
{ 
    
    int i = 0, j = 0;

    
    char str1[size], str2[size]; 
    char stra, strb; 
    
    printf("Escreva uma palavra de menos de 15 letras.\n");
    fgets(str1, size, stdin);
    printf("Escreva a mesma palavra mas com letras de tamanhos diferentes.\n");
    fgets(str2, size, stdin);

   
    while (str1[i]) {
        
        stra = str1[i]; 
        toupper(stra); 
        i++; 
        
    } 
    
    while(str2[j]){
        
        strb = str2[j]; 
        toupper(strb); 
        j++; 
        
    }
    
    if(stra == strb){
        
        printf("Mesma palavra.");
        
    }else{
        
        printf("Palavras diferentes.");
        
    }
  
    return 0; 
} 
