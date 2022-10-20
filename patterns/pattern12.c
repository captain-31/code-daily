/* 
Pattern 12: x

*   *
 * * 
  *  
 * * 
*   *

*/

#include <stdio.h>

int main()
{
    int i,j;
    int n=5;
	int m=n;
    for(i=1; i<=n; i++) {
        for(j=1;j<=n;j++) {
       		if(i==j || j==m)
				printf("*");
            else
            	printf(" ");
		}
        m-=1;
        printf("\n");
    }

    return 0;
}

/*
Most efficient solution:

#include <stdio.h>

int main()
{
    int i,j;
    int n=5;
    for(i=1; i<=n; i++) {
        for(j=1;j<=n;j++) {
       		//if(i==j || j==n-i+1) 
       		if(i==j || i+j == n+1)
				printf("*");
            else
            	printf(" ");
		}
        printf("\n");
    }

    return 0;
}

*/