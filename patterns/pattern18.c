/* 
Pattern 18: V 

*     *
 *   *
  * *
   *
   
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,n=5;

    for(i=1; i<=n; i++) {
    
        for(j=1; j<=n*2-i ;j++) {
        	if(i==j || i+j==n*2)
            	printf("*");
            else
            	printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}