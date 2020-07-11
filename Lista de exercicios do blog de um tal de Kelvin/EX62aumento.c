/*Uma empresa concederá um aumento de salário aos seus
funcionários, variável de acordo com o cargo, conforme
a tabela abaixo. Faça um algoritmo que leia o salário
e o cargo de um funcionário e calcule o novo salário. 
Se o cargo do funcionário não estiver na tabela, ele 
deverá, então, receber 40% de aumento.

Mostre o salário antigo, o novo salário e a diferença.

Código Cargo Percentual

101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%*/

#include <stdio.h>
#include <string.h>

int main()
{
    char cargo[15];
    float salarioAntigo, aumento, salarioNovo; 
    
    printf("Informe o cargo para o qual deseja calcular o aumento:\n> Gerente\n> Engenheiro\n> Técnico\n> Outro\n");
    scanf("%s", cargo);
    
    printf("Informe o salário para o cargo de %s.\n", cargo);
    scanf("%f", &salarioAntigo);
    
    if(strcmp(cargo, "gerente") == 0){
        
        aumento = salarioAntigo * 0.1;
        salarioNovo = salarioAntigo + aumento;
        
    }else if(strcmp(cargo, "engenheiro") == 0){
        
        aumento = salarioAntigo * 0.2;
        salarioNovo = salarioAntigo + aumento;
        
    }else if(strcmp(cargo, "tecnico") == 0){
        
        aumento = salarioAntigo * 0.3;
        salarioNovo = salarioAntigo + aumento;
        
    }else {
        
        aumento = salarioAntigo * 0.4;
        salarioNovo = salarioAntigo + aumento;
        
    }
    
    printf("O salário informado foi de R$ %.2f;\nO salário novo é de R$ %.2f;\nA diferença foi de R$ %.2f.", salarioAntigo, salarioNovo, aumento);
    
    
    return 0;
}
