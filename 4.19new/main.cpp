#include <iostream>

using namespace std;

int main()
{
    int counter=2;
    int number=0;
    int largest=0;
    int nest=0;
    cout<<"enter one number:";
    cin>>largest;
    cout<<"enter the nest number:";
    cin>>number ;
    if(number>largest)
    {
        nest=largest;
        largest=number;
    }
    else
        nest=number;

    while(counter<10)
    {
        cout<<"enter the nest number:";
        cin>>number;
        if(number>largest)
        {
            nest=largest;
            largest=number;
        }

        else if(number>nest)
            nest=number;
            counter++;
    }
    cout<<"largest is :"<<largest<<endl;
    cout <<"nest is :"<<nest<<endl;
}
