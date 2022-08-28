#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double c;
    char sen[100];
    scanf("%d",&a);
    scanf("%lf\n",&c);
    scanf("%[^\n]",sen);
    a=a+i;
    c=c+d;
     strcat(s,sen);
    printf("%d\n",a);
    printf("%lf\n",c);
    printf("%s",s);


    return 0;
}