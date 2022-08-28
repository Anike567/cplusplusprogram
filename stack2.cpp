#include<iostream>
using namespace std;
int top=-1;
int stack[200];
void push(){
    int x;
    cout<<"enter the element wich you want to enter in the stack";
    cin>>x;
    if(top>=199)
    {
        cout<<"stack is full";
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}
int pop()
{
    if(top<0)
    {
        cout<<"stack is empty";
    }
    else
    {
        top=top-1;
        return stack[top];
    }
}
int main(void)
{
    int will=1;
    while(will==1)
    {
        cout<<"main menu"<<endl<<"1 for push"<<"2 for pop";
        cin>>will;
        switch (will)
        {
        case 1:
            push();
            break;
        case 2:
            cout<<pop();
            break;    
        
        default:
            cout<<"invalid choice";
            break;
        }
        cout<<"enter 1 if you want to do more operation of stack";
        cin>>will;
    }
    return 0;
}