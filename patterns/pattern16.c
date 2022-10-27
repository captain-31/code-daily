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
    int i,j,n=3;


    for(i=n; i>=-n; i--) {
    
	    //space loop
        for(j=n;j>=abs(i);j--)
			printf("*");
        
        printf("\n");
    }

    return 0;
}