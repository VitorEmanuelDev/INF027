/*Fazer um algoritmo que leia o tempo
de duração de um evento expresso em segundos
e mostre-o expresso em horas, minutos e segundos.*/

#include <stdio.h>

int main()
{
    int tempoSegundos, tempoHoras,tempoMinutos, segundos, resto, hora = 3600, minuto = 60;
    
    printf("Informe o número de segundos.\n");
    scanf("%d", &segundos); // 5400
    
    tempoHoras = segundos/hora; // 5400/3600 = 1.5 = (int) 1
    resto = segundos%hora; // 5400%3600 = 1800
    tempoMinutos = resto/minuto; // 1800/60 = 30
    tempoSegundos = resto%tempoMinutos; // 1800%30
    
    printf("O evento durou %d hora(s), %d minutos e %d segundos.", tempoHoras, tempoMinutos, tempoSegundos);

    return 0;
}
