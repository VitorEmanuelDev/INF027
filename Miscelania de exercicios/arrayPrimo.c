/* Prime numbers up to 100*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i, j;
    int primos[50] = {0};
    int indice = 2;
    bool primo;
    
    primos[0] = 2;
    primos[1] = 3;
    
    for(i = 5; i <= 100; i = i + 2){
        
        primo = true;
        
        for(j = 1; primo && i / primos[j] >= primos[j]; j++){
            
            if(i % primos[j] == 0){
                
                primo = false;
                
            }
        }
        
        if(primo == true){
            
            primos[indice] = i;
            indice++;
            
        }
        
    }   
    
    
    for(j = 0; j < indice; j++){
        
        printf("%i ", primos[j]);
        
    }
    
    return 0;
}
