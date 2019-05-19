#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED



#endif // PHONENUMBER_H_INCLUDED
#include <iomanip>
#include "PHONENUMBER.h"
using namespace std;

ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output <<"(" << number.areaCode << ")"
    << number.exchange << "-" << number.line;
    return output;
}

istream &operator>>(istream &input, PhoneNumber &number)
{
    input.ignore();
    input >> setw(3) >> number.areaCode;
    input.ignore(2);
    input >> setw(3) >> number.exchange;
    input.ignore();
    input >> setw(4) >> number.line;
    return input;
}

