/*Dizemos que dois números são amigos se cada um deles é igual à soma dos divisores
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
inteiros positivos de N exceto o próprio N. 


Um exemplo de números amigos são 284 e 220,
pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. Efetuando a soma
destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). 
Os divisores próprios de 284 são 1, 2, 4, 71 e 142, efetuando a soma destes números obtemos o
resultado 220 (1 + 2 + 4 + 71 + 142 = 220).

Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 18416
são amigos, por exemplo).*/


#include <stdio.h>

int main()
{
    int numero, contador, contador2, divisao, divisao2, amigo = 0, amigo2 = 0, amigo3; 
    
    printf("Informe um número:\n");
    scanf("%d", &numero);
    printf("Informe um número amigo:\n");
    scanf("%d", &amigo3);
    
    for (contador = numero; contador > 1; contador--){
        
        divisao = numero/contador;
        
        if(numero%contador == 0){
        
            //printf("%d ", divisao);
            amigo += divisao;
            
        }
    
    }
    
    for (contador2 = amigo; contador2 > 1; contador2--){
     
        divisao2 = amigo/contador2;
        
        if(amigo%contador2 == 0){
        
            //printf("%d ", divisao2);
            amigo2 += divisao2;
            
            
        }
        
    }
    
    //printf("%d ", amigo2);
    //printf("%d", amigo);
    
    if (amigo == divisao2 * 2 && amigo2 == divisao * 2 && amigo == amigo3){
        
        printf("\n%d e %d são números amigos.", amigo3, amigo2);
        
    } else {
        
        printf("\n%d e %d não são amigos.", amigo3, amigo2);
        
    }
    
    return 0;
}
