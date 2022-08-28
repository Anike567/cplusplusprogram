#include<iostream>
using namespace std;
int main(void)
{
    char c;
    int lowercasevowel,uppercasevowel;
    cout<<"enter the alphabets";
    cin>>c;
    lowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercasevowel=(c=='A'||c=='E'||c=='I'||c=='o'||c=='U');
    if(lowercasevowel|| uppercasevowel)
    {
        cout<< "alphabet is vowel";
    }
    else
    {
        cout <<"alphabets is not vowel";
    }
    


}