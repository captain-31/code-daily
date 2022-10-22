/* 
Pattern 14: Pyramid (using 2 loops, space and star)

    *
   ***
  *****
 *******
*********

*/

#include <stdio.h>

int main()
{
    int i,j,k;
    int n=5;

    for(i=1; i<=n; i++) {
    
    	//space loop
        for(j=n-1;j>=i;j--)
			printf(" ");
		
        //Star loop
        for(k=1;k<=i+j;k++)
			printf("*");
            
        printf("\n");
    }

    return 0;
}

/*

Same  pattern using if else. 
Use px and py to print *.

#include <stdio.h>

int main()
{
    int i, j, px, py, n=5;
	px=py=n;

    for(i=1; i<=n; i++) {
    
        for(j=1;j<n*2;j++)
        	if(j>=px && j<=py)
				printf("*");
            else 
            	printf(" ");
        
        px--;
        py++;
        printf("\n");
    }

    return 0;
}

*/