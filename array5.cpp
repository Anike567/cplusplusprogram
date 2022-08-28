#include<iostream>
using namespace std;
void input(int arr[]);
int main(void)
{
    int arr[5];
    input(int arr[5]);
    return 0;
}
void intput(int arr[])
{
    cout <<"enter the element of the arry";
    static int i=0;
    if(i<5)
    {
        cin>>arr[i];
        input();
    }
    else
    {
        exit(1);
    }
    
}