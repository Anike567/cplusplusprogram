#include<stdio.h>
int main(void)
{
    int n,i;
    char str[]="hackerrank";
    printf("enter the vallue of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        switch (i)
        case 0:
         
            for(i=0;i<6;i+2)
            {
                printf("%c",str[i]);
            }
            for(i=1;i<6;i+2)
            {
                printf("%c",str[i]);
            }
            break;
        
         case 1: 
         for(i=6)   
            
            break;
        default:
            break;
        }
    }
}
    return 0;
}