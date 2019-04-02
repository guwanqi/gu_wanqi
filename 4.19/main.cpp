#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    int nest=0;
    cout<<"enter one number:"<<endl;
    cin>>largest;
    cout<<"enter the nest number:";
    cin>>nest ;
    if(number>largest)
    {
        number=largest;
        nest=largest;
    }
    else
        nest=number;

    while(++counter<10)
    {
        cout<<"enter the nest number:";
        cin>>number;
        if(number>largest)
        {
            largest=number;
            nest=largest;
        }

        else
            nest=number;
    }
    cout<<"largest is :"<<largest<<endl;
    cout <<"nest is :"<<nest<<endl;
}
