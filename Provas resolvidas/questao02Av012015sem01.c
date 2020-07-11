/*
Questão II	
  
Escreva um programa em C, que leia um número menor que	
9999,representando uma senha.	

O programa deve verificar se a senha é válida (e imprimir “Senha válida”),	
ou se a senha viola alguma das seguintes regras, caso em que, o programa
deverá apresentar a mensagem de violação correspondente:
  
Regra 

Mensagem 1	
 –	
 Algarismos	iguais:	
  
 “A	senha é formada por algarismos iguais”	

Ex: 5555	
  
Mensagem 2	
 –	
 Sequencia crescente:	
 
“A senha é formada por uma sequencia formada	
por algarismos que formam uma crescente”	
 
Ex: 3456	
  
Mensagem 3	
 –	
 Sequencia decrescente:	

“A senha é formada por uma sequencia formada	
por algarismos que formam uma decrescente”	
 
Ex: 4321	

*/
#include <stdio.h>

int main()
{
    int numero, milhar, centena, dezena, unidade;
    
    printf("Informe um número:\n");
    scanf("%d", &numero);
    
    milhar = numero/1000;
    
    centena = (numero%1000)/100;
    
    dezena = (numero%100)/10;
    
    unidade = (numero%10);

    if (numero > 9999 || numero < 1000){
        
        printf("Senha inválida.");
        
    } else if (milhar == centena && centena == dezena && dezena == unidade){
        
        printf("Senha inválida. Números idênticos.");
        
    } else if (milhar == centena - 1 && centena == dezena - 1 && dezena == unidade - 1){
        
        printf("Senha inválida. Números em sequencia crescente.");
        
    } else if (milhar == centena + 1 && centena == dezena + 1 && dezena == unidade + 1){
        
        printf("Senha inválida. Números em sequencia decrescente.");
        
    } else {
        
        printf("Senha válida.");
        
    }

    return 0;
}
