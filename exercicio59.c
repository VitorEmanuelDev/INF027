/*A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo. Escreva
um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000.
O programa deve imprimir o número par e os dois primos que*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numPar, primo1, primo2, numero, somaPar;
    int flag1 = 0, flag2 = 0;
    
   // for(numPar = 1; numPar <= 10; numPar += 2){
        
        for(numero = 500; numero <= 1000; numero++){
        //printf("\n%d", numPar);
          
          for(primo1 = 2; primo1 <= numero/2; primo1++){
           
            //printf("\n%d", primo1);
            for(primo2 = 2; primo2 <= numero/2; primo2++){
            
                //printf("\n%d", primo2);
                if(numero%primo1 == 0){
                    
                        flag1++;
                    
                    }
                    
                if(numero%primo2 == 0){
                        
                        flag2++;
                        
                }
            
                    if(flag1 != 0 && flag2 != 0){
                        
                        somaPar = primo1 + primo2;
                        
                        if(primo1%2 != 0 && primo2%2 != 0 && somaPar%2 == 0){
                            
                            printf("\n%d + %d = %d", primo1, primo2, somaPar);
                            
                        }
                        
                    }
                    
                }
            
            }  
           
       }
       
    //}
    
}

