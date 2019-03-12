#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "enter an integer:" ;
    cin >>x;
    if(x%2==0)
        cout <<x<<"is an odd number";
    if(x%2!=0)
        cout <<x<<"is an even number";
    return 0;

}
