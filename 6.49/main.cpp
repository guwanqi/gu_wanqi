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
   cout <<"����һ���뾶"<<endl;
   cin>>r;
   cout <<"Բ�����Ϊ"<<circlearea(r)<<endl;
}
