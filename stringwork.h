#ifndef STRING_H
#define STRING_H

#include <iostream>

class StringWork
{
private:
    int variant;

    std::wstring enterStr(std::wstring numStr);
    void processing(std::wstring &firstStr, std::wstring &secondStr);

public:
    StringWork(int variant);
    void work();
};

#endif // STRING_H
