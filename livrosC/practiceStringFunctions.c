/* string functions practice */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
#define rows 25
#define columns 50
#define space 25

int main()
{
    char str[size];
    char name[rows][columns], aux[space];
    int length, i, numero, j;
    
    printf("Type a string to be read backwards:\n");
    fgets(str, size, stdin);
    
    length = strlen(str);
    
    printf("\nThe string in reverse looks like this:\n");
    
    for(i = length; i >= 0; i--){
        
        printf("%c", str[i]);
        
    }
    
    printf("\nInput the number of strings you want\n");
    scanf("%d", &numero);
    
    printf("\nType the strings:\n");
    
    for(i = 0; i <= numero; i++){
        
        fgets(name[i], size, stdin);
        
    }
    
    for(i = 1; i <= numero; i++){
        
        for(j = 0; j <= numero - 1; j++){
            
            if(strcmp(name[j], name[j+1]) > 0){
                
                strncpy(aux, name[j], sizeof(aux) - 1);//if you don't get the size -1, it will read and copy the last element '\0'. we just want the letter characters
                strncpy(name[j], name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1], aux, sizeof(name[j+1]) - 1);
                
            }
            
        }
        
    }
    
    printf("\nAfter the sorting, this is how the the strings look like.\n");
    
    for(i = 0; i <= numero; i++){
        
        printf("%s\n", name[i]);
        
    }
    
    return 0;
    
}

