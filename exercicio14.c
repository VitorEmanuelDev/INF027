#include <stdio.h>

int main()
{   
  int distancia = 300;
  int velocidadeMax = 60;
  int aceleracao, velocidade, tempo, verde;
  
  
  printf("informe uma velocidade.\n");
  scanf("%d", &velocidade);
  
  if (velocidade > 60) {
      printf("Você será multado!\n");
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

