#include <iostream>

using namespace std;

int main()
{
    double x=0;
    double y=0;
    double z=0;
    cout <<"���������������";
    cin>>x>>y>>z;
    if (x>0&&y>0&&z>0)
    {
        if(x+y>z&&z+y>x&&x+z>y)
            cout<<"���������ɹ���������"<<endl;
    }
    else
        cout<<"�����������ܹ���������"<<endl;


}
