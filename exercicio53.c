/*Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um
país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva um
programa, que imprima o tempo necessário para que a população do país A ultrapasse a
população do país B.*/


#include <stdio.h>

int main()
{
    int contador;
    float ponto, paisA = 5000000, paisB = 7000000;
        
        for(contador = 0; paisA < paisB; contador++){
            
            paisA = paisA * 1.03;
            paisB = paisB * 1.02;
            
        }
        
        printf("O país 'A' vai ultrapassar o país 'B' em %d anos", contador);
    
    return 0;
}
