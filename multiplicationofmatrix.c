#include<stdio.h>
void mul(int arr[][3],int[][3]);
int main(void)
{
    int mat1[3][3],mat2[3][3];
    int i,j;
    printf("enter the element of the first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the element of the second matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    mul(mat1,mat2);
    return 0;
}
void mul(int mat1[][3],int mat2[][3])
{
 int i,j,k;
 int sum[3][3];
 
 {
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             sum[i][j]=0;
             for(k=0;k<3;k++)
             {
            
         sum[i][j]=sum[i][j]+(mat1[i][j]*mat2[k][j]);
             }
          
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%2d",sum[i][j]);
         }
         printf("\n");
     }

}