/* 
Pattern 19: V inverted 

    *
   * *
  *   *
 *     *
*       *
   
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,n=5;

    for(i=1; i<=n; i++) {
    
        for(j=1; j<=n+i-1 ;j++) {
        	if(i+j==n+1 || j==n+i-1)
            	printf("*");
            else
            	printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}