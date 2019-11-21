#include <stdio.h>

int main()
{
    float sbase;
    float bonif = 2000;
    float impost;
    float sreceber;
    
    printf("Informe o salário base\n");
    scanf("%f", &sbase);
    
    impost = sbase * 0.15;
    
    printf("O imposto sobre o salario é %.2f\n", impost);
    
    sreceber = sbase - impost + bonif;
    
    printf("O salário a receber é %.2f\n", sreceber);

    return 0;
}
