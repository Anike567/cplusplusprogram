#include<stdio.h>
int main(void)
{
  char c,lowercasevowel;
    printf("enter the alaphabets");
    scanf("%s",&c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a consonant");
    }
    
    
     
  
    return 0;
    
}