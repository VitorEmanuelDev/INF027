/*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos
pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos
anteriores, ou seja:

1. A i = A i-1 + A i-2 , para i ímpar
2. A i = A i-1 - A i-2 , para i par

Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos.*/
#include<stdio.h>

int main(){
int a, b, i, termo;

    printf("Digite um Numero: ");
    scanf("%d", &a);
    
    printf("Digite outro Numero: ");
    scanf("%d", &b);

    for(i=3; i <= 10; i++){

        if(i%2 == 0){
    
            termo = (i - 1) - (i - 2);

            printf("%d ", termo);

        } else {
            
            termo=(i - 1) + (i - 2);
            printf("%d ", termo);
            
                
        }
    }
}
