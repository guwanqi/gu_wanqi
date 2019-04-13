#include <iostream>
#include<iomanip>
using namespace std;
int prime(int n)
    {
        int j=0;
        for(j=2; j<=n; j++)
        if(n%j==0)
            break;
    return j;
    }
int main()
{

    cout<<"2          ";
    for(int number =3; number <+1000; number +=2)
    {
        int m=prime(number);
    if(m==number)
        cout<<number<<setw(10);
    }
    return 0;
}
