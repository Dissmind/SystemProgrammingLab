#include <iostream>
#include <cstdlib>
#include "windows.h"

#include "macro.h"
#include "mathwork.h"
#include "menu.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Menu::startProgram();
    return 0;
}
