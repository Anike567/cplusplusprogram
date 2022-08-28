#include<stdio.h>
#include<string.h>
struct phonebook
{
    char name[30];
    int no;
};
struct quaries
{
    char name1[30];
};

int main(void)
{
    int i,n;
    struct phonebook arr[1000];
    struct quaries arr1[1000];
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d",arr[i].name,&arr[i].no);
        scanf("%s",arr1[i].name1);
    }
     for(i=0;i<n;i++)
     {
         if(strcmp(arr[i].name,arr1[i].name1)==0)
         {
             printf("%s=%d\n",arr[i].name,arr[i].no);
         }
         else
         {
             printf("not found");
         }
         
     }
  
    return 0;
    
}


