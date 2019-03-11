#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int sum,difference,result,quotient;
    cout<<"Enter two integer: ";
    cin>>number1>>number2;
    sum=number1+number2;
    difference=number1-number2;
    result=number1*number2;
    quotient=number1/number2;
    cout<<"sum is "<<sum<<endl;
    cout<<"difference is "<<difference<<endl;
    cout<<"result is "<<result<<endl;
    cout<<"quotient is "<<quotient<<endl;
    return 0;
}
