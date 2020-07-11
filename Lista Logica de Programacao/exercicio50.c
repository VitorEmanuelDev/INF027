/*Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o
lançamento de um par de dados tenha como resultado da soma dos valores dos dados o
número lido. Por exemplo, se a entrada for o número 7, o programa deve imprimir as
seguintes combinações:

- 1 6
- 2 5
- 3 4
- 4 3
- 5 2
- 6 1

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, crescente, decrescente;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    if (num < 0){
        
        printf("Valor inválido");
        
    }
    
     /*num = sqrt((num + 1) * 2);  
    num = pow(num, 2);
    
   for (contador = 1; contador < 7; contador++){
        
        printf("%d\n", num);
        num = num + 9;
        
    }*/
    
    
    
    for (crescente = 1, decrescente = num - 1; crescente < num; crescente++, decrescente--){
        
        printf("\n%d %d", crescente, decrescente);
       
        
    }
    
   /* for (contador = num; contador > 1; contador--){
        
        num = num - 1;
        printf("%d\n", num);
        
    }*/
    
    
    return 0;
}

