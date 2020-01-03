/*Escrever um algoritmo que lê a massa (toneladas)
de um avião, sua aceleração (m/s²) e o tempo (s)
que levou do repouso até a decolagem. Calcular e
escrever a velocidade atingida (Km/h), o comprimento
da pista (m) e o trabalho mecânico realizado (J) no
momento da decolagem.

distanciaMetros = 1/2 * (aceleracaoMS * tempoSegundos *tempoSegundos);

trabalho (J) = massa (kg) * aceleracao (m/s²) * distancia (m);

ex: 5kg e que causa um aceleração de 1,5m/s² e se desloca por uma distância de 100m

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float tons, kg, distanciaMetros, tempoSegundos, aceleracaoMS,
    velocidadeKmH, trabalhoJoules, convertToKm = 3.6;
    
    printf("Qual a massa do avião em toneladas?\n");
    scanf("%f", &tons);
    
    printf("Qual a aceleração do avião (m/s²)?\n");
    scanf("%f", &aceleracaoMS);
    
    printf("Em quantos segundos o avião percorreu a distância?\n");
    scanf("%f", &tempoSegundos);
    
    velocidadeKmH = aceleracaoMS * tempoSegundos * convertToKm;
    
    distanciaMetros = 0.5 * (aceleracaoMS * tempoSegundos * tempoSegundos);
    
    kg = tons/1000;
    
    trabalhoJoules = kg * aceleracaoMS * distanciaMetros;
    
    printf("Velocidade: %.2f Km/h;\nDistância: %.2f m;\nTrabalho: %.2f J.", velocidadeKmH, distanciaMetros, trabalhoJoules);

    return 0;
}
