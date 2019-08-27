#include <iostream>

#include "structwork.h"
#include "liststruct.h"

StructWork::StructWork(int variant)
{
    this -> variant = variant;
}




void StructWork::work(){
    system("cls");
    std::wcout << L"Лабораторная работа №7 Структуры" << std::endl
               << L"Хлопицкий Алексей Денисович ПКС17-3К" << std::endl
               << std::endl;

    // Ввод размера массива
    int arraySize = StructWork::enterArraySize();
    std::wcout << std::endl;

    switch(this -> variant)
    {
    case 1:
        // Выделение памяти
        Animal *array = new Animal[arraySize];


        // Ввод данных
        for (int i = 0; i < arraySize; i++) {
            std::wcout << L"[ Структура №" << i + 1 << L" ]  " << L"Введите имя >>> ";
            std::wcin >> array[i].name;
        }
        std::wcout << std::endl;


        // Вывод структуры
        int numStr;

        while(true){
            while(true){
                std::wcout << L" -== Вывод структуры ==- "          << std::endl
                           << L"  Введите номер структуры" << std::endl
                           << L"     \"0\" для выхода"        << std::endl
                           << L" >>> ";
                std::wcin >> numStr;
                std::wcout << std::endl;

                //TODO: Проверка вводных данных
                if (true) break;

                std::wcout << L"Ошибка вводных данных! Повторите попытку" << std::endl << std::endl;
            }

            if (numStr == 0) return;

            std::wcout << L"Структура №" << numStr << std::endl;
            std::wcout << L"Имя: " << array[numStr - 1].name;
            std::wcout << std::endl << std::endl;
        }
    }
}


int StructWork::enterArraySize(){
    int result;

    while(true){
        std::wcout << L"Введите размер массива >>> ";
        std::wcin  >> result;

        //TODO: Проверка вводных данных
        if(true) break;

        std::wcout << L"Ошибка вводных данных! Повторите попытку" << std::endl << std::endl;
    }

    return result;
}
