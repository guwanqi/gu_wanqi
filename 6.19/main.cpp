#include <iostream>
#include<cmath>

using namespace std;
double hypotenuse(double,double);

int main()
{
    double a=0;
    double b=0;

    cout << "��������ֱ�Ǳ�" << endl;
    cin>>a>>b;
    cout<<"��ֱ֪�Ǳ�"<<a<<" "<<b<<"б�߳�Ϊ"<<hypotenuse( a, b)<<endl;
}
double hypotenuse(double a,double b)
{
    double x=0;
    x=sqrt(a*a+b*b);
    return x;
}
