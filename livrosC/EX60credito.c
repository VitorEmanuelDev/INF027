/*Um banco concederá um crédito especial aos seus clientes,
variável com o saldo médio no último ano. Faça um algoritmo
que leia o saldo médio de um cliente e calcule o valor do
crédito de acordo com a tabela abaixo. Mostre uma mensagem
informando o saldo médio e o valor do crédito.

Saldo médio

Percentual
De 0 a 200, Nenhum crédito
De 201 a 400, 20% do valor do saldo médio
De 401 a 600, 30% do valor do saldo médio
Acima de 601, 40% do valor do saldo médio*/

#include <stdio.h>

int main()
{
    float saldo,credito;
    
    printf("Informe o saldo médio.\n");
    scanf("%f", &saldo);
    
    if (saldo > 0 && saldo <= 200){
        
        credito = saldo * 0;
        
    } else if (saldo > 200 && saldo <= 400){
        
        credito = saldo * 0.2;
        
    } else if (saldo > 400 && saldo <= 600){
        
        credito = saldo * 0.3;
        
    }else if (saldo > 600){
        
        credito = saldo * 0.4;
        
    }

        printf("Seu saldo é de R$ %.2f e você tem R$ %.2f de crédito.\n", saldo, credito);

    return 0;
}
