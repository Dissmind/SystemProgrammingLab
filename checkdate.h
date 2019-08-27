#ifndef CHECKDATE_H
#define CHECKDATE_H

#include <iostream>

class CheckDate
{
public:
    bool static rangeMath(double num);
    bool static rangeArraySize(int num);

    bool static integer(std::wstring enter);
    CheckDate();
};

#endif // CHECKDATE_H
