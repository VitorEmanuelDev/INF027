/*Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros
pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43).
Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o
programa em questão.*/

#include <stdio.h>

int main()
{

    int N, i, primos[200], index = 0, numero = 1;

    printf("N = ");
    scanf("%d", &N);

    while(numero <= N){

        int divisor = 0;

        for(i = 1; i <= numero; i++){

            if(numero%i == 0)
                divisor++;

        }

        if(divisor == 2){

            primos[index] = numero;
            index++;

        }

        numero++;
    }

    for(i = 0; i <= 200; i += 2){

        if (primos[i] != 0 && primos[i+1] != 0 && primos[i] > 0 && primos[i+1] > 0 &&
            primos[i] <= N && primos[i+1] <= N){

            printf(" %d e %d \n", primos[i], primos[i+1]);

        }
    }


   return 0;

}
