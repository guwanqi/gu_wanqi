#include <iostream>

using namespace std;

int main()
{
    int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int*vPtr=values;
    for(int i=0;i<5;i++)
        cout<<vPtr[i]<<endl;

    for(int i=0;i<SIZE;i++)
        cout<<values[i]<<endl;
    for(int i=0;i<5;i++)
        cout<<*(values+i)<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<*(vPtr+i)<<endl;
    }
    return 0;
}
