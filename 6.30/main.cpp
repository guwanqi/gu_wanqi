#include <iostream>
#include<iomanip>
using namespace std;
int reverseDigits(int);

int main()
{
    int number=0;
    cout <<"enter a number:";
    cin>>number;
    cout << "the number with its digits reversed is:" << reverseDigits(number )<<endl;
}
int reverseDigits(int n )
{
    int r=0;
    while(n>0)
    {
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
