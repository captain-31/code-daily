/* 
Pattern 13: +

  *  
  *  
*****
  *  
  *  

*/

#include <stdio.h>

int main()
{
    int i,j,mid;
    int n=5;
    mid=(n/2)+1;
    for(i=1; i<=n; i++) {
        for(j=1;j<=n;j++) {
       		if(i==mid || j==mid)
				printf("*");
            else
            	printf(" ");
		}
        printf("\n");
    }

    return 0;
}