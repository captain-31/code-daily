/* 
Pattern 17: Vertical Inverted Pyramind

   *
  **
 ***
****
 ***
  **
   *
   
for n: 3
outer loop: 7 (3 to -3)

inner loop: for space
inner loop: for *
 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,n=3;


    for(i=n; i>=-n; i--) {
    
	    //space loop
        for(j=abs(i); j>=1 ;j--)
			printf(" ");
        
        //print loop
        for(k=abs(i)+1; k<=n+1; k++)
        	printf("*");
            
        printf("\n");
    }

    return 0;
}