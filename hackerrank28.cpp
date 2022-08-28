#include<iostream>
using namespace std;
int main(void)
{
    long n,q;
    cin>>n>>q;
    long** a=new long*[n];
    long* arr=(long*)malloc(n*sizeof(long*));
    long t,x,y,lastanswer=0;
    for(int i=0;i<n;i++)
    {
        a[i]=new long[n];
        arr[i]=0;
    }
    while(q--)
    {
        cin>>t>>x>>y;
        if(t==1)
        {
            long j=(x^lastanswer)%n;  
            a[j][arr[j]]=y; 
            ++arr[j] ;      
        }
        else             
        {
            long j=(x^lastanswer)%n;
            long k=arr[j];
            long l = y%k;
            lastanswer = a[j][l];
            cout<<lastanswer<<endl;
        }
    }
    return 0;    
}
