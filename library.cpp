#include<iostream>
#include<fstream>
using namespace std;
class library{
    string student_name;
    int roll_no;
    string date_ofissue;
    string date_of_submission;
    string actual_date;
    public:
    void input();
    void save();
    int fine(string d1,string d2);
};
void library::input()
{
    cout<<"enter the name of student";
    cin>>student_name;
    cout<<"enter the roll no of the student";
    cin>>roll_no;
    cout<<"enter the date of issue";
    cin>>date_ofissue;
    cout<<"enter the date of submission";
    cin>>date_of_submission;
    cout<<"enter the actual date on which the studen submit the book";
    cin>>actual_date;
}
void library:: save()
{
    fstream fsave;
    fsave.open("aniket.txt",ios::app);
    fstream newfile;
    fsave<<"name="<<student_name<<"  roll no="<<roll_no<<"  date of issue="<<date_ofissue<<"  date of submission="<<date_of_submission<<endl;
}
int library::fine(string d1,string d2)
{

}
int main(void)
{
    library l;
    l.input();
    l.save();
    return 0;
}