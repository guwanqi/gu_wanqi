#include <iostream>

using namespace std;

int main()
{
    double r=0;
    double zhouchang=0;
    double zhijing=0;
    double mianji=0;
    double pi=3.14159;
    cout<<"enter one number:";
    cin>>r;

    zhouchang=2*pi*r;
    zhijing=2*r;
    mianji=pi*r*r;
    cout<<"ֱ��Ϊ:"<<zhijing;
    cout<<"�ܳ�Ϊ:"<<zhouchang;
    cout<<"���Ϊ:"<<mianji;
    return 0;
}
