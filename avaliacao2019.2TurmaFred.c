/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horario, horarioNovo, resto, minutos, verifica;
    
    printf("Informe um horário.\n");
    scanf("%d", &horario);
    
    if(horario > 2359 || horario < 0){
        
        printf("Horário inválido.\n");
        
    } 
    
    if (horario >= 0000 && horario <= 59){
        
        horarioNovo = (horario + 1200) * 10;
        
    } else if (horario >= 100 && horario <= 1159){
        
        horarioNovo = horario * 10;
        
    } else if (horario >= 1200 && horario <= 1259){
        
        horarioNovo = (horario * 10) + 1;
        
    } /*else if( horario >= 1300 || horario <= 2359){
        
        resto = horario%100;
        minutos = (resto * 10) + 1;
        verifica = horario - resto;
        
        if(verifica == 1300){
            
            horarioNovo = 1000 + minutos;
            
        } else if(verifica == 1400){
            
            horarioNovo = 2000 + minutos;
            
        } else if(verifica == 1500){
            
            horarioNovo = 3000 + minutos;
            
        } else if(verifica == 1600){
            
            horarioNovo = 4000 + minutos;
            
            
        } else if(verifica == 1700){
            
            horarioNovo = 5000 + minutos;
            
        } else if(verifica == 1800){
            
            horarioNovo = 6000 + minutos;
            
        } else if(verifica == 1900){
            
            horarioNovo = 7000 + minutos;
            
        } else if(verifica == 2000){
            
            horarioNovo = 8000 + minutos;
            
        } else if(verifica == 2100){
            
            horarioNovo = 9000 + minutos;
            
        } else if(verifica == 2200){
            
            horarioNovo = 10000 + minutos;
            
        } else if(verifica == 2300){
            
            horarioNovo = 11000 + minutos;
            
        }*/
        

      printf("%d", horarioNovo);
    
}
