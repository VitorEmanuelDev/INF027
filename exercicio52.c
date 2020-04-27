/*A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos
pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos
anteriores, ou seja:

1. A i = A i-1 + A i-2 , para i ímpar
2. A i = A i-1 - A i-2 , para i par

Criar um algoritmo em C que imprima os N primeiros termos da série de
FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos.*/

#include <stdio.h>

int main(){
    int termo1, termo2, limite, i, termo;
    
    printf("Informe o primeiro termo:\n");
    scanf("%d", &termo1);// 1
    
    printf("Informe o segundo termo:\n");
    scanf("%d", &termo2);//2
    
    printf("Digite a quantidade de termos:\n");
    scanf("%d", &limite);//10
    
    if(limite < 3){
    
        printf("A quantidade mínima de termos é 3.\n");
    
    }
    
    printf("%d %d ", termo1, termo2);
  
    for(i = 0; i < limite; i++){
        
        if(i % 2 != 0){
        
            termo = termo2 - termo1; 
            
        }else if (i % 2 == 0){
            
            termo = termo2 + termo1;
            
        }
        
        printf("%d ", termo);//1 2 3 1 4 3 7 9 11 7
        
        termo1 = termo2;
        termo2 = termo;
    }
    
    return 0;
    
}   
