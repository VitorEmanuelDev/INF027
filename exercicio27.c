//Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere
//que o maior número recebe peso 5 e os outros dois recebem peso 2,5.

#include <stdio.h>

int main()
{
    int num1, num2, num3, media;
    
    printf("Insira três números.\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    
    if (num1 > num2 && num1 > num3){
        
        media = ((num1*5)+(2.5*num2)+(2.5*num2))/10;
        
        printf("A média foi de %d.\n", media);
        
    } else if(num2 > num1 && num2 > num3){
        
        media = ((num2*5)+(2.5*num3)+(2.5*num2))/10;
        
        printf("A média foi de %d.\n", media);
        
    } else {
        
        media = ((num3*5)+(2.5*num1)+(2.5*num2))/10;
        
        printf("A média foi de %d.\n", media);
        
    } 
    
    return 0;

}
