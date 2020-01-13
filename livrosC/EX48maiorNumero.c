/*Implementar um algoritmo capaz de encontrar o maior 
dentre 3 números quaisquer. Suponha todos serem distintos.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Informe três números.\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if(num1 > num2 && num1 > num3){
        
        printf("O número de maior valor é: %d", num1);
        
    }else if(num2 > num1 && num2 > num3){
        
        printf("O número de maior valor é: %d", num2);
        
    }else if(num3 > num1 && num3 > num2){
        
        printf("O número de maior valor é: %d", num3);
        
    }

    return 0;
}
