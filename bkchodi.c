#include<stdio.h>
int rseries(int n);
int main(void)
{
  int n,sum;
  printf("enter the term of n");
  scanf("%d",&n);
  sum=rseries(n);
  printf("%d",sum);
  return 0;  
}
int rseries(int n)
{
    int sum;
    if(n==0)
        return 0;
    sum=n+rseries(n-1);  
    return sum;  
}