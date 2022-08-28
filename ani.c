#include<stdio.h>
int main(void)
{
    char str[10];
    scanf("%[^.]",str);
    printf("%s",str);
    return 0;
}