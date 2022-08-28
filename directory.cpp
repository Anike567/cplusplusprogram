#include<conio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(void)
{
    int check;
    char* name="gfg";
    check=mkdir(name);
    if(!check)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    getch();
    system("dir");
    getch();
}