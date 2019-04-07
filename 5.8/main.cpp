#include <iostream>

using namespace std;

int main()
{
    int number=0;
    int z=0;
    int smallest=0;
    cout<<"enter one number";
    cin>>number;
    cin>>z;
    smallest=z;
    for(int counter=1;counter<number;counter++)
        {
            if(z<smallest)
            smallest=z;
            cin >>z;
        }

    cout << "the last is" <<smallest<< endl;
    return 0;
}
