#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d,e;
   int samllest,largest;

    cout << "Input five difference integer:";
    cin>>a>>b>>c>>d>>e;

    if(a>b&&a>c&&a>d&&a>e)
       cout <<"largest is:"<<a<<endl ;
    if(b>a&&b>c&&b>d&&b>e)
       cout <<"largest is:"<<b<<endl ;
    if(c>a&&c>b&&c>d&&c>e)
       cout <<"largest is:"<<c<<endl ;
    if(d>b&&d>a&&d>c&&d>e)
       cout <<"largest is:"<<d<<endl ;
    if(e>a&&e>c&&e>d&&e>b)
       cout <<"largest is:"<<e<<endl ;

    if(a<b&&a<c&&a<d&&a<e)
       cout <<"smallest is:"<<a<<endl ;
    if(b<a&&b<c&&b<d&&b<e)
       cout <<"smallest is:"<<b<<endl ;
    if(c<a&&c<b&&c<d&&c<e)
       cout <<"smallest is:"<<c<<endl ;
    if(d<b&&d<a&&d<c&&d<e)
       cout <<"smallest is:"<<d<<endl ;
    if(e<a&&e<c&&e<d&&e<b)
       cout <<"smallest is:"<<e<<endl ;
       return 0;
}
