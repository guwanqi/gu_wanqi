#include <iostream>
using namespace std;
int triplebyvalue(int);
void triplebyreference(int&);
int main()
{
    int count=0;
    cout<<"����һ����:";
    cin>>count;

    cout<<"����triplebyvalue()ʹ�������Ϊ����:"<<triplebyvalue(count )<<endl;
    triplebyreference(count );
    cout <<"����triplebyreference()ʹ�������Ϊ����:"<<count  <<endl;
}
int triplebyvalue(int count )
{
    return count*=3;
}
void triplebyreference(int&value)
{
    value*=3;
}
