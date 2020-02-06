/* Escreva o fator de um número N 

ex: n = 7

1 * 1 * 2 * 3 * 4 * 5 * 6 * 7 

ou

7 * 6 * 5 * 4 * 3 * 2 * 1 * 1

fator = 5040

*/

#include <stdio.h> 

int main(){ 
    
    int numero, contador, fator = 1;
    
    printf("Informe um número:\n");
    scanf("%d", &numero);
    
    for (contador = numero; contador > 0; contador--){
        
        fator *= contador;
        printf("%d ", fator);
        
    }
	 
	printf("\nFator de %d é %d.", numero, fator);
	
	return 0; 
} 

