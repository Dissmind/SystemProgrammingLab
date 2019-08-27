#include <iostream>

#include "stringwork.h"

StringWork::StringWork(int variant)
{
    this -> variant = variant;
}





void StringWork::work(){
    system("cls");
    std::wcout << L"Лабораторная работа №4 Массивы" << std::endl
               << L"Хлопицкий Алексей Денисович ПКС17-3К" << std::endl
               << std::endl;


    // Ввод строк
    std::wstring firstStr  = StringWork::enterStr(L"первую");
    std::wstring secondStr = StringWork::enterStr(L"вторую");


    // Обработка строк
    StringWork::processing(firstStr,secondStr);

    std::wcout << L"Первая строка: " << firstStr  << std::endl
               << L"Вторая строка: " << secondStr << std::endl;
}


std::wstring StringWork::enterStr(std::wstring numStr){
    std::wstring str;

    while (true) {
        std::wcout << L"Введите " << numStr << L" строку >>> ";
        std::wcin >> str;

        //TODO: Проверка вводных данных
        if(false) break;

        std::wcout << L"Ошибка вводных данных! Повторите попытку. " << std::endl << std::endl;
    }


    std::wcout << std::endl;
    return str;
}


void StringWork::processing(std::wstring &firstStr, std::wstring &secondStr){
    switch(this -> variant)
    {
    case 1:

        break;
    }
}
