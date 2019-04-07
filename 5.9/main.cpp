#include <iostream>

using namespace std;

int main()
{
    int x=1;

    for (int i=3;i<=15;i+=2)
        x*=i;

    cout<<"1-15中奇数的乘积"<<x<<endl;
    return 0;
}
