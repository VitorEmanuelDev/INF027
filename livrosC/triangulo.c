/* Triangulo de asteriscos*/

#include <stdio.h>

int main() {
    
   int i, j, linhas;
   
   printf("Informe o número de linhas: ");
   scanf("%d", &linhas);
   
   printf("\n");
   
   for (i = 1; i <= linhas; i++) {
       
      for (j = 1; j <= i; j++) {
          
         printf("* ");
         
      }
      
      printf("\n");
      
   }
   
   return 0;
}
