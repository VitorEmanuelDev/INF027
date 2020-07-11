/* Questão 04 Prof. Luiz Machado

Durante suas andanças, Biu percebeu que perdia
muitos compromissos importantes pelo simples fato
de se confundir com as horas, pois seu relógio digital
funciona apenas no formato 24h e Biu acostumou-se a
ter horas no formato 12h.

Sua tarefa é escrever um programa que ajuda o jovem Biu
e converta um horário no formato 24h para o formato 12h,
de modo a facilitar e minimizar os atrasos de Biu.

Obs: O valor mínimo de um dia é 00:00 e o máximo é 23:59
*/

#include <stdio.h>

int main()
{
    int horas, minutos, horasAmPm;
    
    printf("Informe o horário (horas e minutos com dois dígitos cada).\n");
    scanf("%d%d", &horas, &minutos);
   
    if ((horas < 0 || horas > 24) || (minutos < 0 || minutos > 60)) {
        
        printf("P*rra, Biu! Coloque esse horário certo aí, véi.");
        
    } else {
        
            if ((horas >= 13 && horas <= 23) || horas == 0){
                
                horasAmPm = horas - 12;
                printf("São %.2d:%.2d da noite, Biu. Na moral, vá dormir...", horasAmPm, minutos);
                
            } else {
                
                printf("São %.2d:%.2d? Já? Ôh disgrama levante aí e se pique logo!!!", horasAmPm, minutos);
                
            }

        }
        

    return 0;
}
