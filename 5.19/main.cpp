#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double pi=0;
    double n=0;
    double m=2;
    double i=1;
    for(int counter=1;counter<=1000;counter++)
        {
            n=pow(-1,m)*(4/i);
            i=i+2;
            pi+=n;
            m++;
            cout << "pi"<<counter<<"="<<pi << endl;
        }
    return 0;
}
