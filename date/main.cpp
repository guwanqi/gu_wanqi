#include <iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"

using namespace std;
void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);


int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee s("John","Smith","111-111-111",800);
    CommissionEmployee c("Sue","Jone","333-33-3333",10000,.06);
    BasePlusCommissionEmployee b("Bob","Lewis","444-44-4444",5000,.04,300);
    cout<<"Employees processed individually using static  binding:\n\n";
    s.print();
    cout<<"\nearned $"<<s.earnings();
    cout<<"\n earned $"<<s.earnings()<<"\n\n";
    c.print();
    cout<<"\n earned $"<<c.earnings()<<"\n\n";
    b.print();
    cout<<"\n earned $"<<b.earnings()<<"\n\n";

    vector<Employee*>employees(3);

    employees[0]=&s;
    employees[1]=&c;
    employees[2]=&b;

    cout<<"Employee processed polymorphically via dynamic binding :\n\n";
    cout<<"Virtual function calls made off base-class  pointers:\n\n";


    for(const Employee*employeePtr:employees)
        virtualViaPointer(employeePtr);
    for(const Employee*employeePtr : employees)
        virtualViaReference(*employeePtr);

}
void virtualViaPointer(const Employee *const baseclassptr)
{
    baseclassptr->print();
    cout<<"\n earned $"<<baseclassptr->earnings()<<"\n\n";
}
void virtualViaReference(const Employee &baseclassref)
{
    baseclassref.print();
    cout<<"\n earned $"<<baseclassref.earnings()<<"\n\n";
}
