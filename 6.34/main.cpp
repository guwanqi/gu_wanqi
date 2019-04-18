#include <iostream>
#include<iomanip>
using namespace std;
int
int main()
{
    int number=0;
    int yes=34;
    cout << "I have a number between 1 to 1000 \ncan you guess my number? \nplease type your first guess." << endl;
    cin>>number;
    if(number==34)
        cout<<"Excellent!you guessed the number!\nWould you like to play again(y or n)"<<endl;
    for(int i;i<=100;++i)
    {
        if(number<yes)
            cout<<"Too low.try again"<<endl;
        if(number>yes)
            cout<<"Too high.try again"<<endl;
    i++;
    cin>>number;
    }
}
