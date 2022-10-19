/* 
Pattern 10: 

(using 2 loops) 
*****
 ****
  ***
   **
    *

(add space after *, it becomes pyamid)
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include <stdio.h>

int main()
{
    int i,j,k;
    int n=5;
    for(i=1; i<=n; i++) {
        
        // for space
        for(j=1;j<=i-1;j++) {
			printf(" ");
		}
        
        // for star
        for(k=i; k<=n; k++) {
        	printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*

Alternate, for numerice  patterns (5 to 1) 
int main()
{
    int i,j,k;
    int n=5;
    for(i=n; i>=1; i--) {
        
        // for space
        for(j=5;j>i;j--) {
			printf(" ");
		}
        
        // for star
        for(k=i; k>=1; k--) {
        	printf("*");
        }
        printf("\n");
    }

    return 0;
}

*/