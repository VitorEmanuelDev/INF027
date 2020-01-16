/*Um vendedor precisa de um algoritmo que calcule o preço total devido por um cliente.
O algoritmo deve receber o código de um produto, a quantidade comprada e calcular o
preço total, usando a tabela abaixo.

Mostre uma mensagem no caso de código inválido.

Código Preço unitário
‘ABCD’ R$ 5,30
‘XYPK’ R$ 6,00
‘KLMP’ R$ 3,20
‘QRST’ R$ 2,50*/

#include <stdio.h>

int main()
{
    char ABCD[10], XYPK[10], KLMP[10], QRST[10];
    
    int quantABCD, quantXYPK, quantKLMP, quantQRST;
    
    float precoUnidade, precoTotal;
    
    printf("Informe quais produtos comprou (responda 'sim' ou 'nao'):\n‘ABCD’\n‘XYPK’\n‘KLMP’\n‘QRST’\n");
    scanf("%s%s%s%s", ABCD, XYPK, KLMP, QRST);
    
    printf("Informe quanto de cada produto foi comprado:\n‘ABCD’\n‘XYPK’\n‘KLMP’\n‘QRST’\n");
    scanf("%d%d%d%d", &quantABCD, &quantXYPK, &quantKLMP, &quantQRST);
    
    if(strcmp(ABCD, "sim") == 0);
    
    return 0;
}

