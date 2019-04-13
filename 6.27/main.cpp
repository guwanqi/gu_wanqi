#include <iostream>

using namespace std;
double smallest(double,double,double);
int main()
{

    double x=0;
    double y=0;
    double z=0;

    cout << "enter three numbers:" << endl;
    cin>>x>>y>>z;
    cout<<"the smallest number is"<<smallest(x,y,z);
}
double smallest(double x,double y,double z)
{
    if(x<y&&x<z)
        return x;
    if(y<x&&y<z)
        return y;
    if(z<x&&z<y)
        return z;
}
