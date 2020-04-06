/*A sequencia de Recamán é uma sequência, onde seus os termos são dados pela seguinte
relação:
A(0) = 0; para n > 0,
A(n) = A(n-1) - n, se o termo for positivo e já não estiver na sequência,
A(n) = A(n-1) + n, caso contrário.
Escreva um programa em C, que gere e armazene em um vetor de vinte posições, os 20
primeiros termos da série (seu algoritmo deverá ser feito de forma a permitir a mudança
do tamanho do vetor com o mínimo de impacto).
Exemplo da série de Recamán até o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...*/

#include <stdio.h>
#include <stdlib.h>
#define size 20

int main()
{
	int i, j, A[size];
	
	A[0] = 0; 
	
	for(i = 1; i <= size; i++){
	    
	    j = i;// a atribuição tem que vir antes do loop.
		
		if(A[i-1] - i > 0){
		    
			for(/*j = i*/; j > 0; j--){
			    
				if(A[j] == A[i-1] - i)
				break;
				
			}
			
		}	
		
		if(j > 0){
		   
			A[i] = A[i-1] + i;
			
		}else{
		    
			A[i] = A[i-1] - i;
		    
		}
	
		printf("%d ", A[i]);

	}
		
	return 0;
}
