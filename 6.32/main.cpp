#include <iostream>
#include<iomanip>
using namespace std;
int qualityPoints(double);
int main()
{
    int x=0;
    cout << "enter one number:" << endl;
    cin>>x;
    cout <<"the number belong to:"<<qualityPoints(x)<<endl;
}
int qualityPoints(double x)
{
    int i=0;
    if(90<=x&&x<=100)
        return 4;
    else if(80<=x&&x<=89)
        return 3;
    else if(70<=x&&x<=79)
        return 2;
    else if(60<=x&&x<=69)
        return 1;
    return i;
}
