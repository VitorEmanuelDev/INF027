/*Escreva um programa que leia uma string representando um número hexadecimal (base
16) e imprima sua representação em decimal (base 10).*/

#include <stdio.h> 
#include <math.h>
#define size 30

int main() 
{ 
	char str[size];
	int arr[size], i, expoente, contador = 0;
	float valor, soma = 0, numeros = 0;
	
	printf("Informe um número em formato hexadecimal.\n");
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
	           
	       switch(str[i]){
	               
	            case '0':
	            valor = 0;
	            break;
	            
	            case '1':
	            valor = 1;
	            break;
	            
	            case '2':
	            valor = 2;
	            break;
	            
	            case '3':
	            valor = 3;
	            break;
	            
	            case '4':
	            valor = 4;
	            break;
	            
	            case '5':
	            valor = 5;
	            break;
	            
	            case '6':
	            valor = 6;
	            break;
	            
	            case '7':
	            valor = 7;
	            break;
	            
	            case '8':
	            valor = 8;
	            break;
	            
	            case '9':
	            valor = 9;
	            break;
	            
	            case 'A':
	            valor = 10;
	            break;
	            
	            case 'B':
	            valor = 11;
	            break;
	            
	            case 'C':
	            valor = 12;
	            break;
	            
	            case 'D':
	            valor = 13;
	            break;
	            
	            case 'E':
	            valor = 14;
	            break;
	            
	            case 'F':
	            valor = 15;
	            break;
	            
	            case 'a':
	            valor = 10;
	            break;
	            
	            case 'b':
	            valor = 11;
	            break;
	            
	            case 'c':
	            valor = 12;
	            break;
	            
	            case 'd':
	            valor = 13;
	            break;
	            
	            case 'e':
	            valor = 14;
	            break;
	            
	            case 'f':
	            valor = 15;
	            break;
	            
	            default: printf("Valor inválido.\n"); 
                break; 
	       
	       }
	       
	       //printf("\n%d", valor);
	       arr[i] = valor;
	   
	   //printf("%d", contador);
	   contador++;
	   
    }
    
    for(i = contador, expoente = 0; i > 0; i--, expoente++){
        
        numeros = arr[i-1] * pow(16, expoente);
        //printf("\n%d", numeros);
        
        soma += numeros;
        
    }
    
    printf("%.0f", soma);
	
	return 0; 
	
}
