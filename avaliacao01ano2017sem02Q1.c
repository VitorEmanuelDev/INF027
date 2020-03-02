/*

Considere um algoritmo similar ao de cálculo de dígito verificador de código de barras
do tipo UPC:O cálculo do dígito verificador se dá como no exemplo abaixo. Considere o código
fictício: 2345. Para o cálculo do dígito verificador, você deve adicionar todos os de posições
ímpares.

No exemplo, somaremos os dígitos 2 e 4 (posição 1 e 3), o que gera o valor 6. Multiplique 3 pelo
resultado dessa soma; no exemplo, multiplicaremos 6 por 3, o que gera o valor 18. Então, deve-se
somar os dígitos das posições pares (3 e 5, que estão nas posições 2 e 4, no exemplo, gerando o valor 8).
Adiciona-se a este valor, soma dos dígitos pares, o resultado do produto previamente calculado (8+18 = 26,
no exemplo). O dígito verificador é determinado calculando-se o número que deve ser adicionado a esta 
soma, para criar um múltiplo de 10; no caso do exemplo, o dígito verificador será 4, pois 26+4 = 30,
que é igual a 10 * 3.

Escreva um programa em C que leia UM ÚNICO número de 4 dígitos e gere UM ÚNICO número de 5 dígitos
composto pelos dígitos lidos seguido no número verificador. Ou seja, usando o exemplo citado, o programa
deveria ler o número 2345 e gerar como saída o número 23454.

*/
#include <stdio.h>

int main()
{
    int codigo, milhar, centena, dezena, unidade, numeroTeste, codigoNovo;
    
    printf("Informe um número de quatro dígitos:\n");
    scanf("%d", &codigo);
    
    milhar = codigo/1000;
    centena = codigo%1000/100;
    dezena = codigo%100/10;
    unidade = codigo%10;
    
    //printf("%d %d %d %d", milhar, centena, dezena, unidade);
    
    numeroTeste = ((milhar + dezena) * 3) + centena + unidade;
    //printf("%d", numeroTeste);
    
    if(numeroTeste%10 != 0){
        
        for(int i = 1; numeroTeste%10 != 0; i++){
            
            numeroTeste++;
            //printf("%d\n", numeroTeste);
            
            if(numeroTeste%10 == 0){
                
                codigoNovo = (codigo*10) + i; 
                printf("\nO novo código verificador é %d", codigoNovo);
                break;
                
            }
            
        }
        
    }
    
    return 0;
}

