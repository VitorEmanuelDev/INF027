/*Escreva um programa que determine se um dado
número N (digitado pelo usuário) é primo ou não.*/

#include <stdio.h>

int main() {
    
    int num, i, contagem = 0;
    
    printf("Informe um número inteiro (num > 0):\n");
    scanf("%d", &num);
    
    if (num < 0){
        
        printf("Número positivo, pow!");
        
        
    }else{
    
        for (i = 1; i <= num; i++) {
            //printf("%d\n", i);
            
            if (num%i == 0) {
                
                contagem++;
                
            }
            
        }
    
        if(contagem == 2 && num != 1 ){
    
   	        printf("\n%d é um número primo.", num);
        
        }else{
        
   	        printf("\n%d não é um número primo.", num);
   	
        }
    }
    
  return 0;
  
}
