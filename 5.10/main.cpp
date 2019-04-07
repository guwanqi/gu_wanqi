#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int y=1;

    for(int i=1;i<=5;i++)
        {
           y*=x;
           cout <<x <<"!n is"<<y << endl;
           x++;

        }

    return 0;
}
