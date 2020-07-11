#include <stdio.h>

int main()
{
    
    float horas;
    float salarioBrut;
    float impost;
    float salarioRec;
    
    printf("Informe o número de horas.\n");
    scanf("%f", &horas);
   
    salarioBrut = horas*2.27;   

    impost = salarioBrut * 0.03;
    
    salarioRec = salarioBrut - impost;
    
    printf("O salário a receber é de %.2f", salarioRec);

    return 0;
}
