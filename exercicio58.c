/* Soma = 1 - (1/3³) + (1/5³) + (1/7³) + (1/9³) -... sendo Pi = raiz cubica de (Soma*32)

faça um algoritmo e escreva o valor de Pi usando os 51 primeiros da série acima 

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float pi, soma = 0;
    int divisor = 1, contador;
    
    for (contador = 1; contador <= 51; contador++, divisor + 2){
        
        if (contador%2 == 0){
            
            soma -= 1/pow(divisor,3);
            
        } else{
            
            soma += 1/pow(divisor,3);
            
        }
        
    }
    
    pi = cbrt(soma * 32);
    
    printf("%f", pi);

    return 0;
}

