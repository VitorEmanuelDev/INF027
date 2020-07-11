/*Escreva um número que leia um número em Romano e imprima o equivalente em
decimal (base 10)*/

#include <stdio.h> 
#include <string.h>

int main() 
{ 
	char str[30];
	int arr[30], i, contador = 0, size = 0;
	float valor, somatorio = 0;
	
	printf("Escreva um número com algarismos romanos (use letras maiúsculas).\n");
	scanf("%s", str);
	
	size = strlen(str);
	
	for(i = 0; i < size; i++){
	           
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
	       //contador++;
	       //printf("\n%i", arr[i]);
	       //printf("\n%i", contador);
	       
    }
    
    
    somatorio = arr[size-1];
    //printf("%i", arr[size-1]);
   
    for(i = size-1; i > 0; i--){
        
       if(arr[i] > arr[i-1]){
           
             somatorio = somatorio - arr[i-1];
       
       }else{
           
             somatorio = somatorio + arr[i-1];
             
       }
       
    }
   
   printf("%s corresponde a: %.0f", str, somatorio);

	
}
