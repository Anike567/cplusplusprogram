#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c,s[8],sen[20];
    scanf("%c",c);
    scanf("%s",s);
    scanf("%[^\n]%*c", sen);
    scanf("\n");
    printf("%c",c);
    printf("%s",s);
    printf("%s",sen);    
    return 0;
}