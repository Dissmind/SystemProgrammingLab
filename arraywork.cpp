#include <iostream>
#include <string>

#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>


#include "arraywork.h"
#include "checkdate.h"
#include "menu.h"


ArrayWork::ArrayWork(int variant)
{
    this -> variant = variant;
}



int ArrayWork::enterArraySize(){
    while(true){
        std::wcout << L"Введите размер массива. (Не более 20 элементов)" << std::endl
                   << L">>> ";
        std::wcin >> arraySize;
        // TODO: Проверка на инт
        if (CheckDate::rangeArraySize(arraySize)) break;
        arraySize = 0;
        std::wcout << L"Ошибка ввода данных" << std::endl
                   << L"Повторите попытку!" << std::endl << std::endl;
    }
    std::wcout << std::endl;
    return arraySize;
}


void ArrayWork::enterDateIntegerArray(int *array){
//    std::wcout << L"Ручной ввод данных" << std::endl << std::endl;

//    std::string enter = "2234";

//    for (int i = 0; i < arraySize; i++) {
//        std::wcout << L"[" << i + 1 << L"] >>> ";
//        //std::wcin >> enter;
//        //std::getline(std::wcin, enter);
//        //std::wcin.getline()
//        std::wcout << std::endl;

//        if (CheckDate::integer(enter)){
//            int e = enter;
//            array[i] = e;
//            continue;
//        }

//        std::wcout << std::endl
//                   << L"Ошибка вводных данных! Повторите попытку!" << std::endl;
//    }
}


int ArrayWork::initTypeArray(int v){
    TypeArray result;


    // Натуральные числа
    if
    (
           v == 4
        || v == 7
        || v == 8
        || v == 12
        || v == 16
        || v == 20
        || v == 26
        || v == 28
    )
    {
        result = natural;
        return result;
    }


    // Вещественные числа
    if
    (
           v == 5
        || v == 10
        || v == 13
        || v == 17
        || v == 18
        || v == 21
        || v == 23
        || v == 29
     )
    {
        result = real;
        return result;
    }


    // Целые числа
    result = integer;
    return  result;
}


void ArrayWork::work(){
    system("cls");
    std::wcout << L"Лабораторная работа №4 Массивы" << std::endl
               << L"Хлопицкий Алексей Денисович ПКС17-3К" << std::endl
               << std::endl;

    int arraySize = enterArraySize();

    double arrayD[arraySize];
    int arrayI[arraySize];

    //arrayWork::fillArray();

    std::wcout << L"[1]: Для заполнения данных в массив вручную" << std::endl
               << L"[2]: Для заполнения данных в массив рандомными числами" << std::endl
               << L">>> ";
    int typeFill;
    std::wcin >> typeFill;
    std::wcout << std::endl << std::endl;

    int typeNum = initTypeArray(variant);

    switch (typeNum)
    {
    // Целые числа
    case 0:
        // Заполнение вручную
        if (typeFill == 1) enterDateIntegerArray(arrayI);
        // Заполнение рандомными числами
        if (typeFill == 2)
        break;

    // Натуральные числа
    case 1:
        // Заполнение вручную
        if (typeFill == 1)
        // Заполнение рандомными числами
        if (typeFill == 2)
        break;

    // Вещественные числа
    case 2:
        // Заполнение вручную
        if (typeFill == 1)
        // Заполнение рандомными числами
        if (typeFill == 2)
        break;
    }



    // Алгоритмы
    int result = 0;

    switch(variant)
    {
        case 1:
        for (int i : arrayI) if ((i % 3) == 0) result += i;

        if (result == 0) std::wcout << std::endl
                                    << L"Ответ: Не найденно чисел делящихся на 3" << result
                                    << std::endl;
        else {
            std::wcout << std::endl
                       << L"Ответ: Сумма чисел, делящихся на 3 ровна: " << result
                       << std::endl;
        }
        break;
    }
}
