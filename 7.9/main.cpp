#include <iostream>
#include<array>
using namespace std;
const size_t rows=2;
const size_t columns=3;
void printarray(const array<array<int,columns>,rows>&);


int main()
{
    array<array<int,columns>,rows>array1= {1,2,3,4,5,6};
    array<array<int,columns>,rows>array2= {1,2,3,4,5};

    cout<<"1�����е�Ԫ��:"<<endl;
    printarray(array1);

    cout<<"2�����е�Ԫ��:"<<endl;
    printarray(array2);

    for(size_t columns=0;columns<4;++columns)
        {
            array1[1][2]=0;
            cout<<"��ʼ��array1��1��2�У�"<<array1[1][2]<<endl;



    for(size_t row=0; row<array1.size(); ++row)
    {
        for(size_t columns=0; columns<array1[row].size(); ++columns)
        {
            array1[row][columns]=0;
            cout<<"\narray1��ʼ����"<<array1[row][columns]<<' ';
        }

        cout<<endl;
    }

    for(size_t row=0; row<array2.size(); ++row)
    {
        for(size_t columns=0; columns<array2[row].size(); ++columns)
        {
            array2[row][columns]=0;
            cout<<"\narray2��ʼ����"<<array2[row][columns]<<' ';
        }

        cout<<endl;
    }
}
void printarray(const array<array<int,columns>,rows>&)
{
    for(auto const &row :a)
    {
        for(auto const &element:row)
            cout<<element<<' ';

        cout<<endl;
    }
}
