/*Fazer um algoritmo que dado um número, calcular
e escrever se este é positivo ou negativo, e múltiplo
ou não de 3, ao mesmo tempo.*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe um número qualquer.\n");
    scanf("%d", &num);

    
    
    if(num > 0){
        
        printf("O número %d é positivo ", num);
        
    } else {
        
        printf("O número %d é negativo ", num);
        
    }
    
    if(num%3 == 0){
        
        printf("e é múltiplo de 3.\n");
        
    }else {
        
        printf("e não é múltiplo de 3.\n");

    }
    
    
    
    return 0;
}
