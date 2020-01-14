/*Escrever um algoritmo que lê um conjunto de 4 valores
“i”, “a”, “b” e “c”, onde “i” é um valor inteiro e positivo
e “a”, “b” e “c” são quaisquer valores reais e os escreva.

A seguir:
• Se i = 1 escrever os três valores a, b, c em ordem crescente.
• Se i = 2 escrever os três valores a, b, c em ordem decrescente.
• Se i = 3 escrever os três valores a, b, c de forma que o maior número entre a,b,c fique entre os dois e o menor fique por último.**/
#include <stdio.h>

int main()
{
    int i, a, b, c;
    
    printf("Escolha o valor de 'i':\n [1]\n [2]\n [3]\n");
    scanf("%d", &i);
    
    printf("Escolha três números.\n");
    scanf("%d%d%d", &a, &b, &c);
    if(i == 1){
        
        if(a > b && b > c){
            
            printf("Ordem crescente: %d %d %d", c, b, a);
            
        } else if (a > c && c > b){
            
            printf("Ordem crescente: %d %d %d", b, c, a);
            
        }else if (b > a && a > c){
            
            printf("Ordem crescente: %d %d %d", c, a, b);
            
        } else if (b > c && c > a){
            
            printf("Ordem crescente: %d %d %d", a, c, b);
            
        } else if (c > a && a > b){
            
            printf("Ordem crescente: %d %d %d", b, a, c);
            
        }else if (c > b && b > a){
            
            printf("Ordem crescente: %d %d %d", a, b, c);
            
        }
        
    } else if(i == 2){
        
       if(a > b && b > c){
            
            printf("Ordem decrescente: %d %d %d", a, b, c);
            
        } else if (a > c && c > b){
            
            printf("Ordem decrescente: %d %d %d", a, c, b);
            
        }else if (b > a && a > c){
            
            printf("Ordem decrescente: %d %d %d", b, a, c);
            
        } else if (b > c && c > a){
            
            printf("Ordem decrescente: %d %d %d", b, c, a);
            
        } else if (c > a && a > b){
            
            printf("Ordem decrescente: %d %d %d", c, a, b);
            
        }else if (c > b && b > a){
            
            printf("Ordem decrescente: %d %d %d", c, b, a);
            
        }
        
    }else if(i == 3){
        
       if(a > b && b > c){
            
            printf("Ordem: %d %d %d", b, a, c);
            
        } else if (a > c && c > b){
            
            printf("Ordem: %d %d %d", c, a, b);
            
        }else if (b > a && a > c){
            
            printf("Ordem: %d %d %d", a, b, c);
            
        } else if (b > c && c > a){
            
            printf("Ordem: %d %d %d", c, b, a);
            
        } else if (c > a && a > b){
            
            printf("Ordem: %d %d %d", a, c, b);
            
        }else if (c > b && b > a){
            
            printf("Ordem: %d %d %d", b, c, a);
            
        } 
        
    }

    return 0;
}
