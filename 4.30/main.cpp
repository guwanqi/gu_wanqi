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
    cout<<"直径为:"<<zhijing;
    cout<<"周长为:"<<zhouchang;
    cout<<"面积为:"<<mianji;
    return 0;
}
