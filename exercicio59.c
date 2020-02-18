/*A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo. Escreva
um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000.
O programa deve imprimir o número par e os dois primos que*/

#include <stdio.h>
#define MIN 500
#define MAX 1000

int main() {
    
    int numero, contador, contadorPrimo, primo;
    
    
    for(contador = MIN; contador <= MAX; contador++){
        
        if(contador%2 == 0){
                
                printf("%d \n", contador); 
                
        }
        
        /* primo = 0;
        
        for(contadorPrimo = 1; contadorPrimo <= MAX; contadorPrimo++){
            
            
            
            if(contador%contadorPrimo == 0){
                
                primo++;
            
            }
        }
        
        if(primo == 2){
           
           printf("%d \n" ,contador); 
            
        }*/
    
    }

    
    return 0;
}
