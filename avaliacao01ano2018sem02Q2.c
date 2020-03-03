/* Um algoritmo de dígito verificador da setelândia é baseado na conversão de números
para a base sete como descrito a seguir: Lê-se um número de 0 a 999 escrito na base 10.
Em seguida, converte-se esse número para a base 7. Soma-se os algarismos do número na base 7,
e, por fim, calcula-se o resto da divisão desta soma por 7. Este número deve ser inserido à
direita do número original (como dígito verificador), e o número gerado deve ser impresso.
Por exemplo: Caso o número lido seja (999)10, o algoritmo deverá calcular a representação na
base 7 deste número: (2625)7. Deve-se buscar o resto da divisão, da soma destes algarismos
(2+6+2=5=15) por 7 (1). O número gerado com DV, será 9991. Apenas um número deve ser impresso
como saída do algoritmo. Escreva um algoritmo em C, que  realize a geração do número com DV
de acordo com as regras apresentadas. */


#include <stdio.h>
#include <math.h>

int main()
{
    int numero, baseSete, i, verificador, soma = 0, somaSete = 0, numeroSete, faker;
    
    printf("Informe um número de 0 a 999 na base decimal.\n");
    scanf("%d", &numero);
    
    faker = numero;
    
    for(i = 0; faker > 0; i++){
        
        
        baseSete = faker%7;
        //printf("%d", baseSete);
        faker = faker/7;
        soma += baseSete;
        //somaSete += baseSete * pow(10, i);
        
    }
    
    verificador = soma%7;
    //numeroSete = (somaSeteo * 10) + verificador;
    numeroSete = (numero * 10) + verificador;
    
    //printf("%d", somaSete);
    printf("%d", numeroSete);

    return 0;
}



