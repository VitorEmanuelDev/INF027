/*Construa um programa que receba um número e verifique se ele é um número triangular. (Um
número é triangular quando é resultado do produto de três números consecutivos. Exemplo:
24 = 2 x 3 x 4)*/


#include <stdio.h>

int main(){
int numero, contador = 1, verificador, resto;

printf("Informe um número inteiro:\n");
scanf("%d", &numero);

//numero = n * (n + 1) * (n + 2);

for (contador = 1; contador <= numero; contador++){

    verificador = contador * (contador + 1) * (contador + 2);
    resto = numero%contador;
    
    if(resto == 0 && verificador == numero){
        
        printf("%dx%dx%d = %d", contador, contador + 1, contador + 2, numero);
        
        printf("\n%d é um número triangular.\n", numero);
        break;
    
        } else if (numero != verificador && resto == 0 && contador > 1){
            
        printf("%d não é um número triangular.\n", numero);
        break;
            
        }
        
    }
    
        return 0;
}

