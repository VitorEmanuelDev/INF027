/*A famosa conjectura de Goldbach diz que todo inteiro par maior que 2
é soma de dois números primos. Testes foram feitos, mas ainda não se achou
um contra-exemplo. Escreva um programa mostrando que a afirmação é verdadeira
para todo número par entre 500 e 1000. O programa deve imprimir o número par e
os dois primos que somados dão o número par.*/

#include <stdio.h>
#define MIN 500
#define MAX 1000


int main()
{
    int verificador1 = 0, verificador2 = 0;

   for(int contador = MIN; contador <= MAX; contador +=2){
       
        //printf("%d\n", contador);
        for(int contador1 = 1; contador1 <= MAX/2; contador1++){
            
            //printf("%d\n", contador1);
            for(int contador2 = MIN; contador2 >= 1; contador2--){
               
                //printf("%d\n", contador2);
               
                /*
                for(int contador3 = 2; contador3 <= contador1; contador3++){
                    
                    //printf("%d\n", contador3);
                    if (contador1%contador3 == 0) {
                        verificador1++;
                    
                    }
                    
                }
                
                for (int contador4 = 2; contador4 <= contador2; contador4++){
                    
                    //printf("%d\n", contador4);
                    if (contador2%contador4 == 0) {
                        verificador2++;
                    
                    }
                    
                }
                
                if (verificador1 == 0 && verificador2 == 0){
        
                   printf("%d + %d = %d", contador2, contador1, contador);
                   
                }*/
                
            }
        }
    }    
}



