#include<iostream>
#include<io.h>
#include<fcntl.h>
#include<iomanip>
using namespace std;
int main(void)
{
    // _setmode(_fileno(stdout),_O_U16TEXT);
    // wcout<<"following character are in cyrillic"<<endl;
    // wcout<<L"\x0411\x0414\x0416\x0419\x041B"<<endl;;
    // wcout<<L"\x0905 \x0905 \x0907 \x0908"<<endl;
    int i=752;
    float a=425;
    float b=123.500328f;
    char str[]="my name is aniket";
    ios_base::fmtflags oldFlags;
    oldFlags=cout.flags();
    cout<<"current flasgs="<<cout.flags()<<endl;
    cout<<hex<<i<<endl;
    cout<<showbase<<hex<<i<<endl;
    cout<<uppercase<<showbase<<hex<<i;
    cout<<dec<<i<<endl;
    cout<<setfill('o');
    cout<<"Fill character"<<cout.fill()<<endl;
    cout<<left<<setw(40)<<str<<endl;
    cout.precision(6);
    cout<<"precision"<<cout.precision()<<endl;
    cout<<showpoint<<showpos<<a<<endl;
    cout<<fixed<<b<<endl;
    cout<<scientific<<b<<endl;
    cout<<"currentflags="<<cout.flags()<<endl;
    cout.flags(oldFlags);
    cout<<"current flags="<<cout.flags()<<endl;
    return 0;
}