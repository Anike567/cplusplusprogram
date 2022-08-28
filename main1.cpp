#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    private:
    int rollno;
    char sname[30];
    public:
    void show()
    {
      cout<<"enter your rollno and name";
      cin>>rollno; 
      cin>>sname;
      cout<<"your roll no is"<<rollno;
      cout<<"your name is "<<sname; 
    }
};
int main()
{
  student obj;
  obj.show();
  getch();
  return 0;
}