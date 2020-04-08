/*Dizemos que um número i é congruente módulo m a j se i % m = j % m.
Por exemplo, exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
Escreva um programa em C, que leia i, j e m e imprima todos os pares de números i*
congruente modulo m a j*, onde i*<= i e j*<= j.*/

#include <stdio.h>

int main()
{
    int i, j, I, J, m;
    
    printf("Informe um número I:\n");
    scanf("%d", &I);
    
    
    printf("Informe um número J:\n");
    
    scanf("%d", &J);
    
    
    printf("Informe um número m:\n");
    scanf("%d", &m);
    
        
        for (i = I; I >= 0; I--){
       
            for (j = J; J >= 0; J--){
           
                if((J % m == I % m) && J != I && J / m != 0 && I / m != 0){
                 
                    printf("[%d;%d] ", J, I);
                    
                }
       
            }
       
        }
		
	    		
        

    return 0;
}

