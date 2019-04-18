#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int flip();
int main()
{
    int head=0;
    int tail=0;
    srand(time(0));
    for(int i=1;i<=100;++i)
    {
        if(flip()==0)
        {
            ++tail;
            cout<<"tail"<<endl ;
        }
        else
        {
            ++head;
            cout<<"head"<<endl;
        }

        if(i%10==0)
            cout<<endl;
    }
    cout << "\n the total number of head:" <<head<< endl;
    cout <<"\n the total number of tail;"<<tail<<endl;
}
int flip()
{
    return rand()%2;
}
