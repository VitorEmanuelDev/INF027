/* Raiz quadrada /  Square root

Babylonian method >> https://www.geeksforgeeks.org/square-root-of-a-perfect-square/
                     https://www.youtube.com/watch?v=sZmz7znP6x0

*/



#include <stdio.h>
#include <stdlib.h>


float valorAbsoluto(float x);
float raiz(float x);

int main(){

    float numero;
    
    printf("Informe um número para calcularmos a raiz:\n");
    scanf("%f", &numero);
    printf("%f\n", raiz(numero));

    return 0;
}


float raiz(float x){
    
    const  float  limite = .00001;
    float  chute = 1.0;
    float valorRetorno = 0.0;

    if ( x < 0 ){
        
        printf ("Negative argument to squareRoot.\n");
        valorRetorno = -1.0;
    }else{
        
        while ( valorAbsoluto (chute * chute - x) >= limite ){
            
           chute = ( x / chute + chute ) / 2.0;
        
        }
        
        valorRetorno = chute;
        
    }

    return valorRetorno;
    
}

float valorAbsoluto(float x){
    
    if (x < 0)
        x = x * -1;

    return x;
    
}
