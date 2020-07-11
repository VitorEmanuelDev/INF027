/*8 - Preencher um vetor com os numeros de 10 a 20, e depois mostrar os elementos pares do
vetor de trás prá frente. E também mostrar os números ímpares.*/

#include<stdio.h>

int main()
{
   int i, array[20];
   
   for(i = 0; i <= 10; i++){
       
       array[i] = i + 10;
       printf("%d ", array[i]);
        
    }
   
   for(i = 20; i >= 10; i -= 2){
       
       array[i] = i;
       printf("%d ", array[i]);
       
    }
   
   for(i = 1; i <= 10; i += 2){
       
       array[i] = i + 10;
       printf("%d ", array[i]);     
        
    }
    
    return 0;
    
}
