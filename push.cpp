#include<iostream>
using namespace std;
const int MAX=5;
class stack
{
    private:
    int arr[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int num)
    {
        if(top>=MAX-1)
        {
            cout<<"stack is full";
        }
        else
        {
            top++;
            arr[top]=num;
        }
        
    }
    int  pop()
    {
        int num;
        num=arr[top];
        top--;
        cout<<"deleted element is"<<num<<endl;
        return num;
    }
    void show()
    {
         for(int i=0;i<MAX;i++)
        {
            cout<<arr[i]<<endl;
        }   
    }
};
int main(void)
{
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.show();
   
    // cout<<"deleted element is "<<num;
     stk.pop();
     stk.push(60);
     stk.show();
    return 0;
}