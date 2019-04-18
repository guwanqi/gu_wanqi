#include <iostream>

using namespace std;
inline double circlearea(double);
double pi=3.14159;
inline double circlearea(double r)
{
    return pi*r*r;
}

int main()
{
   double r=0;
   cout <<"输入一个半径"<<endl;
   cin>>r;
   cout <<"圆的面积为"<<circlearea(r)<<endl;
}
