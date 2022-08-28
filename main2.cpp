#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
int roll_no;
char s_name;
char father_name;
int age;
int marks;
public:
void accept ();
public:
void show()
{
    cout<<roll_no;
    cout<<s_name;
    cout<<father_name;
    cout<<age;
    cout<<marks;
}
};
void student::accept()
{
    cout<<"enter the name rollno fathers name age marks";
    cin>>roll_no;
    cin>>s_name;
    cin>>father_name;
    cin>>age;
    cin>>marks;
}
int main()
{
    student s;
    s.accept();
    s.show();
    getch();
    return 0;
}

