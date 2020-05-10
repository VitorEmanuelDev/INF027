/*Escreva um número que leia um número em Romano e imprima o equivalente em
decimal (base 10)*/

#include <stdio.h> 
#include <string.h>
#include <math.h>
#define size 30

int main() 
{ 
	char str[size];
	int arr[size], i, j, contador = 0;
	float valor, soma = 0;
	
	printf("Escreva um número com algarismos romanos (use letras maiúsculas).\n");
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
	           
	       switch(str[i]){
	               
	            case 'I':
	            valor = 1;
	            break;
	            
	            case 'V':
	            valor = 5;
	            break;
	            
	            case 'X':
	            valor = 10;
	            break;
	            
	            case 'L':
	            valor = 50;
	            break;
	            
	            case 'C':
	            valor = 100;
	            break;
	            
	            case 'D':
	            valor = 500;
	            break;
	            
	            case 'M':
	            valor = 1000;
	            break;
	            
	            default: printf("Valor inválido.\n"); 
                break; 
	       
	       }
	       
	       arr[i] = valor;
	       contador++;
	       //printf("\n%i", arr[i]);
	       //printf("\n%i", contador);
	       
    }
    
    
    //arr[contador] = 0;
    
    for(i = 0; i < contador; i++){
        //printf("\n%i", arr[i]);
        
        if(arr[i] < arr[i+1]){
          
            soma = arr[i-1] - arr[i];//wtf???? a rever
            //soma = arr[i+1] - arr[i];//
            //printf("%i %i", arr[i+1], arr[i]);
            //printf("\n%.0f", soma);
         
        } else {
         
            soma += arr[i];
         
        }
        
    }
    
    printf("\n%.0f", soma);
    
	return 0; 
	
}


