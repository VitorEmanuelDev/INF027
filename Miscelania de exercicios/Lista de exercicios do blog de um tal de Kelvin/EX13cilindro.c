/*Fazer um algoritmo que obtenha o raio
e a altura de um cilindro. Calcular e escrever
o volume e a área deste cilindro.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float raio, altura, volume, pi = 3.14, area;
    
    printf("Informe o raio e a altura do cilindro em cm.\n");
    scanf("%f%f", &raio, &altura);
    
    area = pow(raio,2) * pi; 
    volume = area * altura;
    
    printf("A área do cilindro é de %.2f cm² e o volume é de %.2f cm².", area, volume);

    return 0;
}
