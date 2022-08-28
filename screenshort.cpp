#include<iostream>
#include<windows.h>
using namespace std;
int main(void){
    keybd_event(VK_MENU,0,0,0);
    keybd_event(VK_SNAPSHOT,0,0,0);
    keybd_event(VK_SNAPSHOT,0,KF_UP,0);
    keybd_event(VK_MENU,0,KF_UP,0);

}