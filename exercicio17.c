/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o
cliente que realizou o saque. Um possível critério seria o da &quot;distribuição ótima&quot; no sentido
de que as notas de menor valor fossem distribuídas em número mínimo possível. Por
exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$
50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um
programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo
com o critério da distribuição ótima (considere existir notas de R$1,00; R$2,00; R$5,00;
R$10,00; R$20,00; R$50,00 e R$100,00).*/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int nota1, nota2, nota5, nota10, nota20, nota50, nota100;
  
  int valor;


  printf ("Notas disponíveis\n%d %d %d %d %d %d %d\n", 100, 50, 
  20, 10, 5, 2, 1);

  printf ("\nQual valor deseja sacar?\n");
  scanf ("%d", &valor);

  if (valor == 100 || valor == 50 || valor == 20 || valor == 10)
    {
        
      printf("Valor solicitado: %d.\n", valor);        
      printf ("\nContando cédulas... 1 cédula de %d ...Pode sacar.", valor);
      
    } else if (valor < 10 || valor == 5 || valor == 2 || valor == 1){
        
      printf("O caixa não emite valores inferiores a R$ 10");  
      
      } else while(valor > 0){
          
        printf("Valor solicitado: %d.\n", valor);        
        printf ("\nContando cédulas.\n\n");
        
        nota100 = valor / 100;
        valor = valor%100;
        printf("%d cédula(s) de R$ 100\n", nota100);
        
        nota50 = valor / 50;
        valor = valor%50;
        printf("%d cédula(s) de R$ 50\n", nota50);
        
        nota20 = valor / 20;
        valor = valor%20;
        printf("%d cédula(s) de R$ 20\n", nota20);
        
        nota10 = valor / 10;
        valor = valor%10;
        printf("%d cédula(s) de R$ 10\n", nota10);
        
        nota5 = valor / 5;
        valor = valor%5;
        printf("%d cédula(s) de R$ 5\n", nota5);
        
        nota2 = valor / 2;
        valor = valor%2;
        printf("%d cédula(s) de R$ 2\n", nota2);
        
        nota1 = valor / 1;
        valor = valor%1;
        printf("%d cédula(s) de R$ 1\n", nota1);
        
        printf("...Pode sacar");
      
        }
    }

