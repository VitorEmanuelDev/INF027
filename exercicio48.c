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
    
    for (i = 2; i <= num/2; i++) {
        //printf("%d\n", i);
        
        /*o programa vai dividir o número informado por dois e vai percorrer o período
       de 2 até num/2. O registro final de i será usado para o teste a seguir*/
       
        /*sobre o if abaixo: se o resto do quociente entre o número informado
        e o registro final de 'i' (obtido no for loop acima) for igual a zero,
        o número informado não é primo. Saberemos isso através da variável
        'contagem' que terá o valor de 1 e não vai passar no teste que verifica
        se a contagem é igual a zero*/
        
        if (num%i == 0) {
            contagem++;
            break;
            //faça contagem + 1 e pare o programa
        }
        
    }
    
    if(contagem == 0 && num != 1 ){
    //se a variável 'contagem' for igual a zero E se o número informado não for igual a 1  
   	printf("\n%d é um número primo.", num);
        
    }else{
        
   	printf("\n%d não é um número primo.", num);
   	
   }
}
  return 0;
  
}
