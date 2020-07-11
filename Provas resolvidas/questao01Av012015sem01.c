/*Questão I	
  
Escreva um programa em C, que leia um número menor que	
9999 e mostre a soma dos dígitos centrais (2o e 3o dígitos).	

Assim, se o número informado for 4326, a saída do programa
deverá ser 5 (3+2).	
  
*/

#include <stdio.h>

int main()
{
    int centena, dezena, unidade, numero, soma;
    
    printf("Informe um número menor que 9999:\n");
    scanf("%d", &numero);
    
    if (numero > 9999 || numero < 0){
        
        printf("Número inválido");
        
    } else if (numero > 999){
        
        centena = (numero%1000)/100;
        dezena = (numero%100)/10;
        soma = centena + dezena;
        printf("%d", soma);
        
    } else if (numero <= 999 && numero > 100){
        
        unidade = numero%10;
        dezena = (numero%100)/10;
        soma = dezena + unidade;
        printf("%d", soma);
        
    } else if (numero > 0 && numero <= 99){
        
        dezena = numero%10;
        printf("%d", dezena);
        
    }

    return 0;
}
