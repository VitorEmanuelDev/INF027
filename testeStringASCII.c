#include <stdio.h>
#include <string.h>
 int main()
 {
     char string[100];
     int i = 0;

    puts("Informe uma palavra:\n"); 
    fgets(string,100,stdin);

    for(i = 0; string[i] != '\0'; i++){
        
        if(string[i] >= 'a' && string[i] <= 'z'){
            
           string[i] -= 32;  //s[i] = s[i] - 32
           
        }

     }

     puts(string); 
   
     return 0;
 }
