#include<iostream>
#include<conio.h>
# define mes cout<<"enter what do you want to do on given numbers 1 sum,2sub,3mul,4,div and enter 0 if you want to exit ";
using namespace std;
class cal
{
    public:
     void sum(float num1,float num2)
     {
         
       cout<< num1+num2;
        
         
     }
     void sub(float num1,float num2)
     {
         cout<<num1-num2;
     }
     void mul(float num1,float num2)
     {
         cout<<num1*num2;
     }
     void div(float num1,float num2)
     {
         if (num1<num2)
         {
             cout <<num2/num1;
         }
         else
         {
             cout<<num1/num2;
         }
         
     }
     
};
int main(void)
{
    mes;
     int c;
    while(c!=0)
{
    cal c1;
    float a,b;
   
    cout <<"enter the numbers";
    cin>> a>>b;

    
    cin>> c;
    switch (c)
    {
    case 1:
        c1.sum(a,b);
        break;
    case 2:
        c1.sub(a,b);
        break;
    case 3:
        c1.mul(a,b);
        break;
    case 4:
        c1.div(a,b);
        break;    
    
    default:
        break;
    }
    }
   
}
