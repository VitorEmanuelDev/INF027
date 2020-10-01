/*Dígitos verificadores são um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa
forma fraudes ou erros de transmissão ou digitação. 

Para o cálculo do dígito verificador de códigos de barras, deve-se multiplicar 
por três a soma de todos os dígitos das posições ímpares. Depois disso, deve-se
adicionar a este valor, todos os dígitos das posições pares. O dígito verificador
é calculado como o número que deve ser adicionado a este valor para se chegar a 
múltiplo de 10. Por exemplo, considere o número 22345. 

O triplo da soma dos números das posições ímpares é: 3 x (2+3+5), que resulta em 30.
Se somarmos a este número os números das posições pares teremos: 30 + 2 + 4 = 36.
Assim, o valor para se chegar a um múltiplo de 10 é 4 (36+4=40). Sendo, portanto 4,
o dígito verificador.

Escreva um programa em C, que calcule e imprima o DV de um código de barras de 5 dígitos.*/

#include <stdio.h>

int main()
{
    int codigoBarras, dezenaMilhar, milhar, centena, dezena, unidade, numeroTeste; 
    
    printf("Informe um código de barras de 5 dígitos:\n");
    scanf("%d", &codigoBarras);
    
    dezenaMilhar = codigoBarras/10000;
    
    milhar = (codigoBarras%10000)/1000;
    
    centena = (codigoBarras%1000)/100;
    
    dezena = (codigoBarras%100)/10;
    
    unidade = codigoBarras%10;
    
    //printf("%d %d %d %d %d", dezenaMilhar, milhar, centena, dezena, unidade);
    
    numeroTeste = ((dezenaMilhar + centena + unidade) * 3) + milhar + dezena; 
    
    //printf("%d", numeroTeste);
    
    if(numeroTeste%10 != 0){
        
        for(int i = 1; numeroTeste%10 != 0; i++){
            
            numeroTeste++;
            
            if(numeroTeste%10 == 0){
                
                printf("Seu dígito verificador é: %d\n", i);
                printf("Seu código de barras agora é: %d-%d", codigoBarras, i);
                break;
                
            }
            
        }
        
    }

    return 0;
}
