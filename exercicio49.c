/*Escreva um programa que determine se um dado
número N (digitado pelo usuário) é primo ou não.*/

#include <stdio.h>

int main() {
    
    int num, i, resto;
    
    printf("Informe um número inteiro (num > 0):\n");
    scanf("%d", &num);
    
    if(num < 0 || num == 1){
        
        printf("%d não é um número primo", num);
        
    } else if(num == 2){
        
        printf("%d é um número primo", num);
        
    }else if(num%2 == 0){
            
            printf("%d não é um número primo", num);
            
    }else if (num > 23 && (num%2 == 0 || num%3 == 0 || num%5 == 0 
    || num%7 ==0 || num%11 == 0 ||num%13 == 0 || num%17 == 0 || num%19 == 0 || num%23 == 0)){
            
            printf("%d não é um número primo", num);
            
    } else{
            
            printf("%d é um número primo.", num);
            
    }
    
  return 0;
  
}
