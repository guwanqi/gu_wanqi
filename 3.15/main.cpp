#include <iostream>
#include"Date.h"
using namespace std;

int main()
{
Date date(10,21,1999);
cout<<"Month:"<<date.getMonth()<<endl;
cout<<"Day"<<date.getDay()<<endl;
cout<<"Year"<<date.getYear()<<endl;
cout<<"Original date:"<<endl;
date.displayDate();
date.setMonth(3);
date.setDay(24);
date.setYear(20199);
cout<<"new date:"<<endl;
date.displayDate();
}
