#include <iostream>
#include<iomanip>
using namespace std;
int celsius(int);
int fahrenheit(int);
int celsius(int F)
{
    int C;
    C=0.55*(F-32);
    return C;
}
int fahrenheit(int c)
{
    int f;
    f=1.8*c+32;
    return f;
}

int main()
{
    cout << "Fahrenheit equivalents of Celsius temperatures:" << endl;
    cout<<setw(10)<<"Celsius "<<setw(10)<<"Fahrenheit"<<endl;

    for(int i=1;i<100;++i)
    {
        int x=0;
        x=fahrenheit(i);

        cout <<setw(10)<<i<<setw(10)<<x<<endl;
    }
    cout<<setw(10)<<"Fahrenheit "<<setw(10)<<"Celsius"<<endl;

    for(int j=32;j<=212;++j)
    {
        int y=0;
        y=celsius(j);
        cout <<setw(10)<<j<<setw(10)<<y<<endl;
    }
}

