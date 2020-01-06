/*Desenvolver o ano e dizer se ele é ou não bissexto*/

#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int ano;
  
    
    printf("Informe um ano:\n");
    scanf("%d", &ano);
    
    if(ano%4 == 0){
        
        printf("%d tem 366 dias.\n", ano);
          
    } else {
        
        printf("%d tem 365 dias.\n", ano);
    
    }
 return 0;   
}
