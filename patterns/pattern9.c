/* 
Pattern 9: 

(using 2 loops) 
    *
   **
  ***
 ****
*****

(add space after *, it becomes pyamid)
    * 
   * * 
  * * * 
 * * * * 
* * * * * 


*/

#include <stdio.h>

int main()
{
    int i,j,k;
    int n=5;
    for(i=1; i<=n; i++) {
        
        // for space
        for(j=n-1;j>=i;j--) {
			printf(" ");
		}
        
        // for star
        for(k=1; k<=i; k++) {
        	printf("*");
        }
        printf("\n");
    }

    return 0;
}