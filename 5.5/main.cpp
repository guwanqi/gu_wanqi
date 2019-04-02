#include <iostream>

using namespace std;

int main()
{
    int total=0;
    int number=0;
    int a=0;
    cout<<"enter one number:";
    cin>>number;
    for (int i=0;i<number;i++)
        {
        cin>>a;
        total=total+a;
        }

    cout <<"the total is"<<total << endl;
    return 0;
}
