#include <iostream>

using namespace std;

int main()
{
    double x=0;
    double y=0;
    double z=0;
    cout <<"输入三个非零的数";
    cin>>x>>y>>z;
    if (x>0&&y>0&&z>0)
    {
        if(x+y>z&&z+y>x&&x+z>y)
            cout<<"这三个数可构成三角形"<<endl;
    }
    else
        cout<<"这三个数不能构成三角形"<<endl;


}
