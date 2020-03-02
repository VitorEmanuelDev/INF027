/*O controle do colesterol plasmático é importante na prevenção de doenças coronarianas.
Um dos fatores mais importantes na prevenção destas doenças é a redução dos níveis de 
LDL-Colesterol no plasma sanguíneo. Contudo a medição direta do LDL-Colesterol, uma partícula
de tamanho muito menor que as do HDL-Colesterol por exemplo, requer processos de ultra-centrifugação,
que tornam este exame muito caro e somente possível de ser executados em laboratórios de pesquisa com
equipamentos muito específicos.

Assim, os laboratórios costumam usar a equação de Friedewald para estimar o LDL-Colesterol à partir
dos valores do Colesterol Total, HDL-Colesterol Total e Triglicerídeos:

[colesterol total] − [HDL total] − 20% do valor de triglicerídios = LDL estimado.

Considere a tabela abaixo e escreva um programa em C, que leia os valores de Colesterol Total,
HDL- Colesterol Total e Triglicerídeos de um paciente, para indicar em qual categoria de nível
de LDL-Colesterol, ele se encontra:
            
              Níveis de LDL-Colesterol                                            Categoria
                Menor que 100mg/dl                                                  Ótimo
                100mg/dl a 129mg/dl                                              Sub-ótimo
                130mg/dl a 159mg/dl                                               Limítrofe
                160mg/dl a 189mg/dl                                                  Alto
                190mg/dl ou superior                                             Muito alto
                
*/
                
#include <stdio.h>

int main()
{
    float colesterol, HDL, triglicerideos, LDL;
    
    printf("informe o colesterol total:\n");
    scanf("%f", &colesterol);
    
    printf("informe o HDL total:\n");
    scanf("%f", &HDL);
    
    printf("informe o nível total de triglicerideos:\n");
    scanf("%f", &triglicerideos);
    
    LDL = colesterol - HDL - (0.2 * triglicerideos);
    
    if (LDL < 100){
        
        printf("Tá suave.");
        
    } else if(LDL >= 100 || LDL < 130){
        
        printf("De boa, mas reduza um pouco o bacon.");
        
    } else if(LDL >= 130 || LDL < 160){
        
        printf("De boa, mas... Nada de frituras, beleza?");
        
    } else if(LDL >= 160 || LDL < 190){
        
        printf("Tem muito sangue no seu colesterol, sabia?");
        
    } else if(LDL >= 190){
        
        printf("Vanha cá... Você bebe óleo em vez de água?");
        
    }                                                      

    return 0;
}
