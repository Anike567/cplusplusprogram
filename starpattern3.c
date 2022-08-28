#include<stdio.h>
int strpattern(int n);
int main()
{
    int n;
    printf("enter the number of stars");
    scanf("%d",&n);
    strpattern(n);
    return 0;
}
int strpattern(int n)
{
    int i,k;
    if(n==0)
    return 0;
        for(k=0;k<n;k++)
     {
         for(i=n;i>k;i--)
         {
                 printf(" ");
         }
            for(i=0;i<=k;i++)
         {
                printf("* ");
         }
         printf("\n");
     }
   
        
        return 0;

}