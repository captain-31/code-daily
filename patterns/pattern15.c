/* 
Pattern 15: Reverse Pyramid (using 2 loops, for space and star)

*********
 ******* 
  *****  
   ***   
    * 

*/

#include <stdio.h>

int main()
{
    int i,j,k,z,n=5;
    z=n*2 -1;

    for(i=n; i>=1; i--) {
    
	    //space loop
        for(j=n-1;j>=i;j--)
        	printf(" ");
        
        //star loop
      	for(k=1;k<=z;k++)
        	printf("*");
        
        z-=2;    
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
	px=1;
    py=n*2 -1;

    for(i=1; i<=n; i++) {
    
        for(j=1;j<n*2;j++)
        	if(j>=px && j<=py)
				printf("*");
            else 
            	printf(" ");
        
        px++;
        py--;
        printf("\n");
    }

    return 0;
}

*/