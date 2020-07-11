/*Escrever um algoritmo e implementá-lo em linguagem C que leia duas matrizes (4x3 e
3x2), calcule e imprima a matriz que representa o produto entre as duas matrizes lidas.*/

 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
     
 	int matrizA[4][3] = {
        
        {5,5,5},
        {2,2,2},
        {3,3,3},
        {4,4,4}
        
    }; 
    
    int matrizB[3][2] = {
        
        {1,1},
        {1,1},
        {1,1}
        
        
    };
    
    int matrizC[4][2];
    
 	int i, j, k;
 	
 	printf("\nMatriz A:\n\n");
    
    for(i = 0; i < 4; i++){
            
        for(j = 0; j < 3 - 1; j++){
            
            printf("%2d ", matrizA[i][j]);
            
        }
        
        printf("\n");
            
    }
    
    printf("\nMatriz B:\n\n");
    
    for(i = 0; i < 3; i++){
            
        for(j = 0; j < 2; j++){
            
            printf("%2d ", matrizB[i][j]);
            
        }
        
        printf("\n");
            
    }
 	
 	for(i = 0; i < 4; i++){
 	    
 		for(j = 0; j < 3; j++){
 		    
 			matrizC[i][j] = 0;
 			
 			for(k = 0; k < 3; k++){
 			    
 				matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
 				
			}
			
		}
		
	}

 	printf("\nMatriz C:\n\n");
 	
 	for(i = 0; i < 4; i++){
 	    
 		for(j = 0; j < 2; j++){
 		    
 			printf("%2d ", matrizC[i][j]);
 			
		}
		
		printf("\n");
	}
	
 	return 0;
 	
 }
