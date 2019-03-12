#include <iostream>

using namespace std;

int main()
{
   int x,y,z;
   int sum,average,result ;

    cout << "Input three difference integer:";
    cin >>x>>y>>z;

    sum =x+y+z;
    average =(x+y+z)/3;
    result =x*y*z;
    cout <<"sum is:"<<sum<<endl ;
    cout <<"average is:"<<average <<endl ;
    cout <<"result is:"<<result <<endl ;

    if(x>y&&x>z)
       cout <<"larger is:"<<x<<endl ;
    if(y>z&&y>x)
       cout <<"larger is:"<<y<<endl ;
    if(z>x&&z>y)
       cout <<"larger is:"<<z<<endl ;
    if(x<y&&x<z)
       cout <<"smallest is:"<<x<<endl ;
    if(y<z&&y<x)
       cout <<"smallest is:"<<y<<endl ;
    if(z<x&&z<y)
       cout <<"smallest is:"<<z<<endl ;

    return 0;
}
