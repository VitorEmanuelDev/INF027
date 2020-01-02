/*Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora
da alta temporada, isto é, nos meses de abril, maio, junho, agosto, setembro, outubro
e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo
que as expectativas se confirmem, escrever um algoritmo que lê a diária normal e 
calcula e escreve as seguintes informações:

– O valor da diária no período da promoção.
– O valor médio arrecadado sem a promoção, durante um mês (apenas finais de semana).
– O valor médio arrecadado com a promoção, durante um mês (apenas finais de semana).
– O lucro ou prejuízo mensal com a promoção.*/

#include <stdio.h>

int main()
{
    float diaria, diariaPromo, arrecSemPromo, arrecComPromo, rentab; 
    
    printf("Informe o valor da diária.\n");
    scanf("%f", &diaria);
    
    diariaPromo = diaria * 0.78;
    arrecSemPromo = (0.4 * 42) * 8 * diaria;
    arrecComPromo = (0.7 * 42) * 8 * diariaPromo;
    rentab = arrecComPromo - arrecSemPromo;
    
    printf("O valor da diária no período de promoção é de R$ %.2f\n", diariaPromo);
    printf("A arrecadação média com promoção é de R$ %.2f\n", arrecComPromo);
    printf("A arrecadação média sem promoção é de R$ %.2f\n", arrecSemPromo);
    printf("A rentabilidade com promoção é de R$ %.2f em relação à rentabilidade sem promoção.", rentab);
    

    return 0;
}
