#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    cout<<"enter the first number:"<<endl;
    cin>>largest;
    while(++counter<10)
    {
        cout<<"enter the nest number:";
        cin>>number;
        if(number>largest)
            largest=number;
    }
    cout<<"largest is :"<<largest<<endl;
}
