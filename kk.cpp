#include<iostream>
using namespace std;
void table (int num ,int num2);
int main(void)
{
    int num;
    cout<<"enter the number";
    cin>>num;
    int num2=1;
    table(num,num2);
    return 0;
}
void table(int num,int num2)
{
    int mul;
    if(num2<=10){
    mul=num2*num;
    cout<<mul<<endl;
    num2++;
    return table(num,num2);
    }
    else
    {
        exit(1);
    }
    

}