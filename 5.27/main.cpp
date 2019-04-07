#include <iostream>

using namespace std;

int main()
{
    for(int counter=1;counter<=10;counter++)
    {
        if(counter!=5)
            cout<<counter<<" ";
    }
    cout << "\nUsed if condition to skip printing 5" << endl;
    return 0;
}
