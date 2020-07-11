/*Construa um programa que receba um número e verifique se ele é um número triangular. (Um
número é triangular quando é resultado do produto de três números consecutivos. Exemplo:
24 = 2 x 3 x 4)*/


#include <stdio.h>

int main(){
int numero, contador, verificador;

printf("Informe um número inteiro:\n");
scanf("%d", &numero);

for (contador = 0; contador <= numero; contador++){

    verificador = contador * (contador + 1) * (contador + 2);
    
    if(verificador == numero){
        
        printf("%dx%dx%d = %d", contador, contador + 1, contador + 2, numero);
        
        printf("\n%d é um número triangular.\n", numero);
        break;
    
        }
        
    }
    
    if (numero != verificador){
            
        printf("%d não é um número triangular.\n", numero);
            
        }
    
        return 0;
}

