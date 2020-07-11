//Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.

#include <stdio.h>

int main()
{
    
    int i;
    char letra;
    char vogal[] = "aeiou"; 
    
    printf("informe uma letra.\n");
    scanf("%c", &letra);
    
    if(letra == vogal[i]){
        
        printf("A letra '%c' é uma vogal.", letra);
        
    } else {
        
        printf("A letra '%c' é uma consoante", letra);
        
    }

    return 0;
}

