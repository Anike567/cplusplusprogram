#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
    char oldname[]="a.txt";
    char newname[]="c.txt";
    if(rename(oldname,newname)==0)
    {
        cout<<"file moved successfully";
    }
    else
    {
        cout<<"error occured";
    }
    

    return 0;
}