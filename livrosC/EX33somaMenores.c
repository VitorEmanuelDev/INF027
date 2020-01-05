/*Dados quatro números distintos,
desenvolver um algoritmo que determine
e imprima a soma dos três menores.*/

#include <stdio.h>

int main()
{
    int a, b, c, d, soma;
    
    printf("Informe os quatro números.\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if (a > b && a > c && a > c){
        
        soma = b + c + d;
        printf("A soma dos três menores números é: %d", soma);
        
    } else if(b > a && b > c && b > d){
        
        soma = a + c + d;
        printf("A soma dos três menores números é: %d", soma);
        
    } else if(c > a && c > b && c > d){
        
        soma = a + b + d;
        printf("A soma dos três menores números é: %d", soma);
        
    }else if(d > a && d > b && d > c){
        
        soma = a + b + c;
        printf("A soma dos três menores números é: %d", soma);
        
    }

    return 0;
}
