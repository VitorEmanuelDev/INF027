/*Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre (fica 
verde),os veículos que nele estavam parados tendem a encontrar os próximos semáforos também abertos. 
Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois, dependendo da 
velocidade permitida na via e da distância entre eles. Assim, ao abrir o semáforo, um veículo 
começa a acelerar até atingir a velocidade permitida, que mantém até chegar ao próximo semáforo, 
levando um certo tempo para percorrer essa distância. Para que encontre o próximo semáforo aberto, 
este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes informações:
        a. a distância desde o semáforo anterior
        b. a velocidade permitida da via
        c. a aceleração típica dos carros */

#include <stdio.h>

int main()
{   
  int distancia = 300;
  int velocidadeMax = 60;
  int aceleracao, velocidade, tempo, verde;
  
  
  printf("informe uma velocidade.\n");
  scanf("%d", &velocidade);
  
  if (velocidade > 60) {
      printf("Você não é o Lewis Hamilton!\n");
  } else {
  
    tempo = distancia/velocidade;
  
  printf("Você está percorrendo 300m em %d segundos\n", tempo);
  
  if (tempo > 3){
    verde = tempo - 4;
    printf("O segundo sinal ficará verde %d segundos após sua arrancada.\n", verde);
  } 
  
    return 0;
  }
}

