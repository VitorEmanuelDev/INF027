/*A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois
números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo. Escreva
um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000.
O programa deve imprimir o número par e os dois primos que*/

#include <stdio.h>
#define MIN 0
#define MAX 100

int main() {
    
    int contador1, contador2, contador3, numero1, numero2, primo, divisoes = 0;
        
        
        for (contador1 = MIN; contador1 < MAX; contador1 += 2) {
    
            
                
        }
        
        for (contador2 = 1; contador2 < MAX/2; contador2++){
            
                numero1 = contador1 - contador2;
                numero2 = contador1 - numero1;
                //printf("%d + %d = %d\n", numero1, numero2, contador1);
                
                //verificar se numero1 é primo e se numero2 é primo.
                //se ambos forem primos, mostrar na tela.
                //depois de resolver isso, colocar este loop dentro do outro
            }
            

        
    
    return 0;
}
