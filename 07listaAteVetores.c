/*7 - Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os
números de 10 a 19. Somar os vetores acima.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    
 int i, j = 0, array[10], vetor[10];
 
 for(i = 0; i <= 9; i++){
     
    array[i] = j + 2;
    j = j + 2;
 
 }
 
 for(i = 0; i <= 9; i++){
 
    printf("%d ", array[i]);
    
 }

 for(i = 0; i <= 9; i++){
     
    vetor[i] = i + 10;
 
 }
 
 for(i = 0; i <= 9; i++){

    printf("%d ",vetor[i]);
    
 }
 

 for(i = 0; i <= 9; i++){
     
    printf("%d ", array[i] + vetor[i]);

 }
 
 return 0;
 
}
