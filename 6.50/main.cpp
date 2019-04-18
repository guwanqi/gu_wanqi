#include <iostream>
using namespace std;
int triplebyvalue(int);
void triplebyreference(int&);
int main()
{
    int count=0;
    cout<<"输入一个数:";
    cin>>count;

    cout<<"利用triplebyvalue()使这个数变为三倍:"<<triplebyvalue(count )<<endl;
    triplebyreference(count );
    cout <<"利用triplebyreference()使这个数变为三倍:"<<count  <<endl;
}
int triplebyvalue(int count )
{
    return count*=3;
}
void triplebyreference(int&value)
{
    value*=3;
}
