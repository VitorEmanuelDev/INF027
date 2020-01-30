/*primo ou não*/
#include <stdio.h>

int main()
{
    int num, divisoes, contador;
    
    printf("Informe um número inteiro:\n");
    scanf("%d", &num);
    
    for (contador = 1; contador <= num; contador++){
        
        if(num%contador == 0){
            
            divisoes++;
            
        }
        
    }
    
    if (divisoes == 2){
        
        printf("primo");
        
    } else {
        
        printf("nope");
    }


    return 0;
}
