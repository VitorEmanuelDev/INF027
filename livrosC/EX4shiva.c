/*Muitos países estão passando a utilizar o sistema métrico. 
Fazer um algoritmo para executar as seguintes conversões:
– Ler uma temperatura em Fahrenheit e imprimir o equivalente em Celsius C=(5F-160)/9.
– Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros
(1 polegada = 25,4 mm).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius, Fahrenheit, Polegada, Milimetro;
    
    printf("Informe a temperatura em Fahrenheit.\n");
    scanf("%f", &Fahrenheit);
    printf("Informe a quantidade de shiva em polegadas (inches)\n");
    scanf("%f", &Polegada);
    
    Celsius = ((Fahrenheit*5) - 160)/9;
    
    Milimetro = Polegada * 25.4;
    
    printf("A temperatura informada em celsius é de C° %.2f.\n", Celsius);
    
    printf("A quantidade de shiva em milímetros é de %.2f mm.\n", Milimetro);
    
    return 0;
}
