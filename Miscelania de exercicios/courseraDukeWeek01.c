/*Given a non-negative integer N:  Make a variable called x, and set it to -N*N.
Count from 1 to 3N + 1 (exclusive), and for each number that you count (call it 'i'): 
Write down the value of x.    Update x to be (x + 2i - 1).*/ 

//test for N =6 should return -36 -35 -32 -27 -20 -11 0 13 28 45 64 85 108 133 160 189 220 253
   
#include <stdio.h>

int main()
{
    int N, x, i;
   
    scanf("%d", &N);
    
    x = -N * N;
    
    i = 1; 

    do{
        
        printf("%d ", x);
        x = (x + 2*i - 1);
           
        i++;
    
    }while(i < 3*N + 1);

    return 0;
    
}


