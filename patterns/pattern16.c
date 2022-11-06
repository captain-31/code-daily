/* 
Pattern 16: Vertical Pyramind

*
**
***
****
***
**
*
for n: 3
outer loop: 7 (3 to -3)
inner loop: j>=abs(i)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,end, n=5;
        
    for(i=1; i<=n*2-1; i++) {
        
        if(i<=n) {
            for(j=1; j<=i; j++) 
                printf("*");
        }
        
        if(i==n) 
            end=n-1;
            
        if(i>n) {
            for(k=1; k<=end; k++) 
                printf("*");
            end--;
        }
        
        printf("\n");
    }
    
    return 0;
}