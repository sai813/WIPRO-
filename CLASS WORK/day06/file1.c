/*
demo on for loop
*
**
***
****
*****
****
***
**
*

*/
#include <stdio.h>

int main()
{
    int i,j,n=5;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++){
            printf("*");    
        }
        printf("\n");
        
    }

    printf("\n\n");
    return 0;
}