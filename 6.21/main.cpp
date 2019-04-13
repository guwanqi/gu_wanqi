#include <iostream>

using namespace std;
bool iseven(int);
int main()
{
    int x=0;
    cout << "enter one number" << endl;
    cin>>x;
    cout<<iseven(x)<<endl;
    for(int i=0; i<=5; ++i)
    {
        cin>>x;
        cout<<iseven(x)<<endl;
    }

}
bool iseven(int x)
{
    int a=0;
    a=x%2;
    if(a==0)
        return true;
    return false;
}
