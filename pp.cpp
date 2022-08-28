#include<iostream >
using namespace std;
int longdivison(string num,int diviser)
{
    string ans ;
    int index=0;
    int temp=num[index]-'0';
    while (temp<diviser)
    {
        temp=temp*10+(num[++index]-'0');

    }
    while(num.size()>index)
    {
        ans+=(temp/diviser)+'0';
        temp=(temp%diviser)*10+num[++index]-'0';
    }
    if(ans.length()==0)
    {
        return "0";
    }
    return temp;

}
int main(void)
{
    string num;
    int diviser;
    cin>>num;
    cin>>diviser;
    cout<<longdivison(num,diviser);
    return 0;
}