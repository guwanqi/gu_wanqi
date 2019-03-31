#include <iostream>
#include"GradeBook.h"
using namespace std;

int main()
{
    GradeBook myGradeBook("CS101 C++ programming");
    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
}
