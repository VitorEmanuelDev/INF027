/*Desenvolver um algoritmo que leia um número
inteiro e verifique se o número é divisível por
5 e por 3 ao mesmo tempo.*/

#include <stdio.h>

int main()
{
    int num, divisivel;
    
    printf("Informe um número inteiro.\n");
    scanf("%d", &num);
    
    divisivel = num%5 + num%3; 
    
    if (divisivel == 0){
        
        printf("O número é divisível por 3 e 5 ao mesmo tempo.\n");
        
    }else {
        
        printf("O número não é divisível por 3 e 5 ao mesmo tempo.\n");
        
    }

    return 0;
}
