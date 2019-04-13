#include <iostream>


using namespace std;
bool multiple(int,int);

int main()
{
    int a=0;
    int b=0;
    cout << "enter two number:" << endl;
    cin>>a>>b;
    cout<<multiple(a,b);
}
bool multiple(int a,int b)
{
    int x=1;
    x=b%a;
    if(x==0)
        return true;

    return false;

}
