#include<stdio.h>
void hourglass(int arr[][3]);
int main(void)
{
    int arr[3][3],i,j;
    printf("enter the element of the array");
    for (i = 0; i < 3; i++ )      
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     hourglass(arr);
    return 0;
    
}
void hourglass(int arr[][3])
{
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
      if(i%2==0)
      {
          for(j=i;j<3;j++)
          {
          
            printf("aniket ");
          }
      }
      else
      {
          for(j=i;j<3;j+2)
          {
          printf("yadav");
          }
          break;
      }
      

    }
}