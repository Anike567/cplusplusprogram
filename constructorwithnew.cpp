#include<iostream>
#include<cstring>
using namespace std;
class string 
{
    char *name;
    int length;
    public:
    string()
    {
        length=0;
        name= new char[length+1];
    }
    string(char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display(void)
    {
        cout<<name<<"\n";

    }
    void join(string &a,string &b);
};
void string ::join(string &a,string &b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name,a.name);
    strcpy(name,b,name);
};
int main(void)
{
    char *first="joseph";
    string name1(first),name2("loius"),name3("lagrange");
    string s1,s2;
    name1.display;
    name2.display;
    name3.display;
    s1.display;
    s2.display;
    return 0;
}












