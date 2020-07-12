/*Desenvolver um algoritmo para pedir um mês
e ano e exibir o número de dias do mês / ano digitados.*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

int main()
{  
    int ano, diasAno, fevereiro;
    char mes[15];
    
  
    
    printf("Informe um ano:\n");
    scanf("%d", &ano);
    
    printf("Informe um mês (A primeira letra deve ser maiúscula. Escreva março com 'ç').\n");
    scanf("%s", mes);
    
    if(ano%4 == 0){
        
        fevereiro = 29;
        diasAno = 366;
          
    } else {
        
        fevereiro = 28;
        diasAno = 365;
    
    }
    
    if (strcmp(mes,"Janeiro") == 0){
        
        printf("Janeiro tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);

    } else if (strcmp(mes,"Fevereiro") == 0){
    
        printf("No ano informado, Fevereiro tem %d dias.\n", fevereiro);
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Março") == 0){
    
        printf("Março tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);

    } else if (strcmp(mes,"Abril") == 0){   
        
        printf("Abril tem 30 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Maio") == 0){
        
        printf("Maio tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Junho") == 0){
        
        printf("Junho tem 30 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Julho") == 0){
            
        printf("Julho tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Agosto") == 0){
                
        printf("Agosto tem 31 dias.\n");     
        printf("%d tem %d dias.\n",ano, diasAno);
        
    } else if (strcmp(mes,"Setembro") == 0){
        
        printf("Setembro tem 30 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Outubro") == 0){
        
        printf("Outubro tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Novembro") == 0){
        
        printf("Novembro tem 30 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    } else if (strcmp(mes,"Dezembro") == 0){
        
        printf("Dezembro tem 31 dias.\n");
        printf("%d tem %d dias.\n",ano, diasAno);
    
    }
          
 return 0;   
}
