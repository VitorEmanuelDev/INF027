
#include <stdio.h>
#include <math.h>

int main()
{
    int numero, base32, i, numero32;
    
    printf("Informe um número de base 10.\n");
    scanf("%d", &numero);
    
    if(numero > 32000 || numero < 0){
        
        printf("Número inválido");
        
    }

    for(i = 0; numero > 0; i++){
        
        base32 = numero%32;
        numero = numero/32;
        numero32 += base32 * pow(10, i);  
        
    }
    
    printf("%d", numero32);
    
    return 0;
}
