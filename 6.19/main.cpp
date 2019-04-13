#include <iostream>
#include<cmath>

using namespace std;
double hypotenuse(double,double);

int main()
{
    double a=0;
    double b=0;

    cout << "输入两个直角边" << endl;
    cin>>a>>b;
    cout<<"已知直角边"<<a<<" "<<b<<"斜边长为"<<hypotenuse( a, b)<<endl;
}
double hypotenuse(double a,double b)
{
    double x=0;
    x=sqrt(a*a+b*b);
    return x;
}
