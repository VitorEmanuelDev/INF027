/*
Escreva um programa em C, que receba como entrada três inteiros
representando uma data (dia, mês, ano), calcule e escreva como 
saída o dia seguinte. Lembre-se que os meses 01, 03, 05, 07, 08, 10 e 12
possuem 31 dias e os meses 04, 06, 09 e 11 possuem 30 dias e o mês 02 pode
possuir 28 ou 29 dias (em caso de ano bissexto). Um ano é bissexto se ele for 
divisível por 4, mas se o ano for divisível por 100 e não for divisível por 400,
ele não é bissexto.
*/
#include <stdio.h>

int main()
{
    int dia, diaSeguinte, mes, ano;
    
    printf("Informe o dia:\n");
    scanf("%d", &dia);
    
    printf("Informe o mês:\n");
    scanf("%d", &mes);
    
    printf("Informe o ano:\n");
    scanf("%d", &ano);
    
    if (mes > 12 || mes < 1 || dia < 1 || dia > 31) {
        
        printf("Data inválida.");
        
    } else if (mes == 1){
            
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 2;
            
        }

    } else if(mes == 3){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 4;
            
        }
        
    } else if(mes == 4){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 30){
            
            diaSeguinte = 1;
            mes = 5; 
            
        }
        
    } else if(mes == 5){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 6;
            
        }
        
    } else if(mes == 6){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 30){
            
            diaSeguinte = 1;
            mes = 7; 
            
        }
        
    } else if(mes == 7){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 8;
            
        }
        
    } else if(mes == 8){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 9;
            
        }
        
    } else if(mes == 9){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 30){
            
            diaSeguinte = 1;
            mes = 10; 
            
        }
        
    } else if(mes == 10){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 11;
            
        }
        
    } else if(mes == 11){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 30){
            
            diaSeguinte = 1;
            mes = 12; 
            
        }
        
    } else if(mes == 12){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 31){
            
            diaSeguinte = 1;
            mes = 1;
            ano++;
            
        }
        
    } else if (ano%400 != 0 && mes == 2){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 28){
            
            diaSeguinte = 1;
            mes = 3;
            
        }
        
    } else if (ano%4 == 0){
        
        diaSeguinte = dia + 1;
        
        if(diaSeguinte > 29){
            
            diaSeguinte = 1;
            mes = 3;
        
        }
        
    }
    
    printf("Data: %d/%d/%d", diaSeguinte, mes, ano);

    return 0;
}
