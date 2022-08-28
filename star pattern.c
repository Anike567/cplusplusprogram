#include<stdio.h>
int main(void)
{
    int i,j,k,l;
    for(k=1;k<=4;k++)
    {

    for(i=k;i<=k;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        
        }
        for(l=1;l<=k;l++)
        {
        printf("* ");
        }
    }
    printf("\n");
    }
    return 0;
}