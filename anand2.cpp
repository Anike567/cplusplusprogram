#include<iostream>
using namespace std;
int main(void)
{
    int hh,mm,ss;
    char ch,ch1;
    cin>>hh>>ch>>mm>>ch>>ss>>ch>>ch1;
    if(ch=='A'){
        if(hh==12){
            hh=00;
        }
    }
    if(ch=='P'&&hh!=12){
        hh=hh+12;
    }
    if(hh>10){
        printf("%0d:0%d:0%d%c%c",hh,mm,ss,ch,ch1);
    }
    else{
        printf("0%d:0%d:0%d%c%c",hh,mm,ss,ch,ch1);
    }
    return 0;
}
