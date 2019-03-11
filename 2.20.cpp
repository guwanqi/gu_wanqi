#include <iostream>

using namespace std;

int main()
{
    double  r,diameter,area,perimeter,pi=3.14159;
    cout<<"Enter one integer: ";
    cin>>r;
    diameter=2*r;
    area=pi*r*r;
    perimeter=2*pi*r;
    cout<<"The diameter is: "<<diameter<<endl;
    cout<<"The area is: "<<area<<endl;
    cout<<"The perimeter is: "<<perimeter<<endl;
    return 0;
}
