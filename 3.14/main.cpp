#include <iostream>
#include"Employee.h"
using namespace std;

int main()
{
Employee employee1("GWQ","XU",520);
Employee employee2("HGH","LZC",1314);
cout<<"Employee`yearly salaries:"<<endl;
int monthlySalary1=employee1.getMonthlySalary();
cout<<employee1.getFirstName()<<""<<employee1.getFirstName()<<":$"<<monthlySalary1*12<<endl;
int monthlySalary2=employee2.getMonthlySalary();
cout<<employee2.getFirstName()<<""<<employee2.getLastName()<<":$"<<monthlySalary2*12<<endl;

employee1.setMonthlySalary(monthlySalary1+monthlySalary1/10);
employee2.setMonthlySalary(monthlySalary2+monthlySalary2/10);

cout <<"employees`yearly salaries after 10% raise:"<<endl;
monthlySalary1=employee1.getMonthlySalary();
cout<<employee1.getFirstName()<<""<<employee1.getFirstName()<<":$"<<monthlySalary1*12<<endl;
monthlySalary2=employee2.getMonthlySalary();
cout<<employee2.getFirstName()<<""<<employee2.getLastName()<<":$"<<monthlySalary2*12<<endl;
};
