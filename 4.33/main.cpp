#include <iostream>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int z=0;
    cout <<"����������";
    cin>>x>>y>>z;
    if(x>0&&y>0&&z>0)
    {
        if(x*x+y*y==z*z||y*y+z*z==x*x||z*z+x*x==y*y)
            cout <<"����ֱ������������";
        else
            cout<<"������ֱ������������";
    }
    else
        cout<<"������ֱ������������";
    return 0;
}
