/*

Pattern 1

****
****
****
****

*/
#include <stdio.h>

int main()
{
    int i,j,n;
    n=5;
    for(i=1; i<=5; i++) {
        for(j=1;j<=5;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}