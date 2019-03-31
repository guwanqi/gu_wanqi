#include"GradeBook.h"
#include<iostream>
#include<iomanip>


using namespace std;
GradeBook::GradeBook(string name )
{
    setCourseName(name);
}
void GradeBook::setCourseName(string name )
{
    if(name.size()<=25)
        courseName=name;
    else
    {
        courseName=name.substr(0,25);
        cerr<<"Name\""<<name<<"\"exceeds maximum length(25).\n"<<"limiting courseName to first 25 characters.\n"<<endl;
    }
}
string GradeBook::getCourseName()const
{
    return courseName;
}
void GradeBook::displayMessage()const
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!\n"<<endl;
}
void  GradeBook::determineClassAverage()const
{
    int total=0;
    unsigned int gradeCounter=0;
    cout<<"Enter grade or -1 to guit:";
    int grade=0;
    cin>>grade;
    do
    {
        total =total+grade;
        gradeCounter=gradeCounter+1;
        cout<<"Enter grade or -1 to guit:";
        cin>>grade;
    }while(grade!=-1);

    if(gradeCounter!=1)
    {
        double average=static_cast<double>(total)/gradeCounter;
        cout<<"\nTotal of all"<<gradeCounter<<"grades entered is"<<total<<endl;
        cout <<setprecision(2)<<fixed;
        cout<<"class average is"<<average<<endl;
    }
    else
        cout<<"No grades were entered"<<endl;
}
