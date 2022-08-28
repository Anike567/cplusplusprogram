#include<iostream>
using namespace std;
int compareintal(string a,string b)
{
    if(a.size()>b.size())
    {
        return 1;
    }
    if(a.size()<b.size())
    {
        return -1;
    }
    if(a.size()==b.size())
    {
        int i=0;
        while(i<a.size())
        {
            if(a[i]>b[i])
            {
                return 1;
            }
            if(a[i]<b[i])
            {
                return -1;
            }
            i+=1;
        }
    }
    else return 0;
}
int* sum(string a,string b)
{
    int n=a.size();
    int* result=(int*)malloc(n*sizeof(int));
    int carry=0;
    for(int i=n-1;i>=0;i--)
    {
        int sum=((a[i]-48)+(b[i]-48))+carry;
        result[i]=sum%10;
        carry=sum/10;
    }
    return result;
}
int* subtrac(string s1,string s2)
{
    int* a=(int*)malloc(s1.size()*sizeof(int));
    for(int i=s1.size()-1;i>=0;i--)
    {
        if(s1[i]>=s2[i])
        {
            a[i]=(s1[i]-48)-(s2[i]-48);
        }
        else{
            a[i]=((s1[i]-48)+10)-(s2[i]-48);int temp=i;
            s1[--temp]--;
        }
    }
   return a ;
}
int main(void)
{
    string s1,s2;
    cout<<"enter the first number";
    cin>>s1;
    cout<<"enter the second number";
    cin>>s2;
    int temp=compareintal(s1,s2);
    // cout<<temp<<endl;;
    if(temp==1)
    {
        cout<<s1<<"is greater";
    }
    else
    {
        cout<<s2<<"is greater";
    }
    cout<<endl;
    int* result=sum(s1,s2);
    for(int i=0;i<s1.size();i++)
    {
        cout<<result[i];
    }
    cout<<endl;
    int* result2=subtrac(s1,s2);
    for(int i=0;i<s1.size();i++)
    {
        cout<<result2[i];
    }
    cout<<endl;
}