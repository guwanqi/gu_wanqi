#include <iostream>

using namespace std;

int main()
{

    int x;
    int y;

    cout << "enter two integer:" ;
    cin >>x>>y;
    if (x==y)
        cout <<"these numbers are equal."<<endl ;
    if(x<y)

        cout <<y <<"is larger."<<endl ;
    if(x>y)

        cout <<x <<"is larger."<<endl ;
    return 0;
}
