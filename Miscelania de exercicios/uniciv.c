/*Em um pequeno país do planeta Cyber , a moeda vigente é o bit cuja sigla é B$. 
Nesta moeda existem cédulas de B$50,00, B$10,00, B$5,00 e B$1,00 bits. Você foi contratado 
para implementar o sistema de saques em um caixa eletrônico e, para isso, você deverá sempre
liberar o menor número de notas possíveis para um determinado valor solicitado. O seu algoritmo
terá como dado de entrada o valor a ser retirado do caixa e deverá emitir o total de cada nota 
necessário para compor o valor solicitado (de modo que este total seja o mínimo possível).
O Algoritmo deverá ser encerrado quando o valor a ser retirado for 0(zero).Obs: Nenhum saque 
poderá exceder B$1000,00 bits. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int saque;
    
    printf("Informe o valor de saque:");
    scanf("%d", &saque);
    
    if(saque < 1 || saque > 1000 ){
    
        printf("Valor inválido.");
        exit(0);
    
    }
    
    int montante = saque;

    int notas50 = 0;
 
    notas50 = montante / 50;
    
    if(montante % 50 != 0){
       
       montante = montante % 50;
       
    }
    
    int notas10 = 0;

    notas10 = montante / 10;
    
    if(montante % 10 != 0){
    
        montante = montante % 10;
    
    }
    
    int notas5 = 0;
    
    notas5 = montante / 5;
    
    if(montante % 5 != 0){
       
       montante = montante % 5;
       
    }
    
    int notas1 = 0;
       
    if(montante < 5  && montante > 0){
            
        notas1 = montante;
        
    }
    
    
    printf("\n%d notas de B$ 50,00\n%d notas de B$ 10,00", notas50, notas10);
    printf("\n%d notas de B$ 5,00\n%d notas de B$ 1,00", notas5, notas1);
   
}

