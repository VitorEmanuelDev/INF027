/*O número e (número de Euler) pode ser representado e calculado por meio da utilização da
série de Taylor para e quando x=1, como a soma da seguinte série infinita:

e = 1/1! + 1/2! + 1/3! + ... 1/n!

Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o
cálculo do número de Euler para cada um dos n primeiros elementos da série.
        */
#include<stdio.h>

int main ()
{
    
int numero,contador;
float euler = 1, fator = 1;

printf("Informe um número:\n");
scanf("%d", &numero);

for( contador = 1; contador <= numero; contador++){
    
    fator *= contador;
    //printf("%f ",fator);
    euler += 1/fator;
    
}

printf("Euler: %f", euler);

return 0;
}
