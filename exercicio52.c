/*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos
pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos
anteriores, ou seja:

1. A i = A i-1 + A i-2 , para i ímpar
2. A i = A i-1 - A i-2 , para i par

Criar um algoritmo em C que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos.*/

#include<stdio.h>

int main(){
int termo1, termo2, i, termo3;

    printf("Informe o primeiro termo:\n ");
    scanf("%d", &termo1);
    
    printf("Informe o segundo termo:\n ");
    scanf("%d", &termo2);

    for(i = 3; i <= 10; i++){

        if(i%2 == 0 || i%2 == 0){
    
            termo3 = (i - 1) - (i - 2);
            printf("%d ", termo3);

        } else {
            
            termo3 = (i - 1) + (i - 2);
            printf("%d ", termo3);
            
                
        }
    }
}
