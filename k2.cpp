#include<iostream>
# include<stdio.h>
using namespace std;
int main(void)
{ 
    string str;
    cin>> str;
    int i=remove("str");
    if(i=0)
    cout<<"file is deleted";
    else
    {
        cout<<"file is not deleted";
    }
    return 0;
}