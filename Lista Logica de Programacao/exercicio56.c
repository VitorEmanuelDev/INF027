/*Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores próprios de
um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. 

Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 =
6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 4, 7 e 14, e a soma dos
seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).

Dado um somatório de N (informado pelo usuário) termos, escreva um programa para calcular S para o número N.*/

#include <stdio.h>

int main()
{
    int numero, contador, divisor, resto, soma = 0;
        
    printf("Informe o número:\n");
    scanf("%d", &numero);

    for (contador = numero; contador > 0; contador--){
        
        //printf("%d ", contador);
        divisor = numero/contador;
        resto = numero%contador;
        
        if (resto == 0 && divisor != numero){
            
            printf("%d ", divisor);
            soma += divisor;
            
        }
        
    }
    
    printf(" somados  = %d\n", soma);

    if (soma == numero){
        
        printf("%d é um número perfeito.", numero);
        
    } else {
        
        printf("%d não é um número perfeito.", numero);
        
    }
    
    return 0;
}
