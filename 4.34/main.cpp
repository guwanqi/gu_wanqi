#include <iostream>

using namespace std;

int main()
{
    int n;
    int c=1;
    cout<<"enter one number:";
    cin>>n;
    cout <<n<<"! is";
    while(n>0)
    {
        c*=n;
        n--;
    }
    cout <<c;
    return 0;
}
