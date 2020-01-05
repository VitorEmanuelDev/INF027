/*Desenvolver um algoritmo para pedir um mês
e ano e exibir o número de dias do mês / ano digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ano, fevereiroBissexto = 29, fevereiroNormal = 28;
    char mes[20];
    
    //printf("Informe um ano:\n");
    //scanf("%d", &ano);
    printf("Informe um mês (use letras minúsculas):\n");
    scanf("%s", mes);
    
    //if(ano%4 == 0){
    //    
    //    printf("%d tem 366 dias.\n", ano);
    //       
    //} else if (ano%4 != 0){
    //    
    //    printf("%d tem 365 dias.\n", ano);
    // 
    //}
    //
    if (mes == "janeiro"/* || mes == "março" || mes == "marco" ||
        mes == "maio" || mes == "julho" || mes == "agosto" ||
        mes == "outubro" || mes == "dezembro"*/){
        
            printf("O mês de %s tem 31 dias num ano bissexto.\n", mes);
        
        }/* else if(mes == "abril" || mes == "juho" ||
        mes == "setembro" || mes == "novembro"){
            
            printf("O mês de %s tem 30 dias num ano bissexto.\n", mes);
            
        }// else if (ano%4 == 0 && mes == "fevereiro"){
            
        //     printf("O mês de %s tem %d dias num ano bissexto.\n", mes, fevereiroBissexto);
             
        //}
        
        else if (mes == "fevereiro"){
            
             printf("O mês de %s tem %d dias num ano 'normal'.\n", mes, fevereiroNormal);
             
        }
    return 0;*/
}


