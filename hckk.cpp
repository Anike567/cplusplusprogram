#include<stdio.h>
#include<conio.h>
#include"graphics.h"
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\Program Files (x86)\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\include");
    getch();
    outtextxy(20,30,"Aniket");
    closegraph();
}