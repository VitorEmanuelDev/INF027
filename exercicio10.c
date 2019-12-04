//Converter um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, binario, resto1, resto2, resto3, resto4, resto5;
    
    printf("Informe um número.\n");
    scanf("%d", &num);
    
    if(num < 0 || num > 32){
        printf("Número inválido.\n");
        
    } else{
    
    resto1 = num%2;
    resto2 = (num/2)%2;
    resto3 = (num/4)%2;
    resto4 = (num/8)%2;
    resto5 = (num/16)%2;
    
    binario = resto5 * 10000 + resto4 * 1000 + resto3 * 100 + resto2 * 10 + resto1;
    
    printf("A versão biária de %d é: %d",num, binario);
    
    }
    
    return 0;
}


/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binario[3], numero, i, j;
    //a variável binario[x] contém num array o maior valor possível que pode ser representado.
    //Caso a condição do if permita algum número que seja maior do que 31, haverá um segmentation error devido a um uso de memória indevido, já que o espaço fornecido pelo array não comporta números superiores a 32 em forma binária.
   
    printf("Informe um número inferior a 32.\n");
    scanf("%d", &numero);
    
    if (numero > 32 || numero < 0){
        printf("O seu número não pode ser superior a 32 e nem pode ser negativo.");
    } else {
        
        i = 0;
        
        while(numero > 0){
        
        binario[i] = numero%2;
       
        numero = numero/2;
       
        i++;
       
        }
        
        for(j = i - 1; j >= 0; j--){
            
            printf("%d", binario[j]);
        }
    }
    
    return 0;
}*/
