#include <iostream>

#include "menu.h"
#include "mathwork.h"
#include "arraywork.h"

Menu::Menu(){}

// Ввод варианта
void Menu::enterVariant(){
 std::wcout << L"|  Введите номер варианта  |" << std::endl
            << L"|__|>>> ";
 std::wcin  >> variant;
}


//
void Menu::startProgram(){
    Menu a;
    a.enterVariant();
    a.mainMenu();
    a.runWork();
}



// Главное меню
void Menu::mainMenu(){
    system("cls");
    std::wcout << L"*==========================---  [ Menu ]  ---============================*"  << std::endl
               << L"|   [ 1]:  Лабораторная №2 Действия над простыми числами.                |"  << std::endl
               << L"|   [ 2]:  Лабораторная №4 Массивы.                                      |"  << std::endl
               << L"|   [ 3]:  Лабораторная №5 Обработка строк.                              |"  << std::endl
               << L"|   [ 4]:  Лабораторная №7 Структуры.                                    |"  << std::endl
               << L"|   [ 5]:  Лабораторная №8 Указатели.                                    |"  << std::endl
               << L"|   [ 6]:  Лабораторная №9 STL (vector и list).                          |"  << std::endl
               << L"|   [ 7]:  Лабораторная №10 Объектно-ориентированное программирование.   |"  << std::endl
               << L"|   [ 8]:  Описание заданий                                              |"  << std::endl
               << L"|   [ 9]:  Об авторе                                                     |"  << std::endl
               << L"|   [10]:  Выбор другого варианта                                        |"  << std::endl
               << L"|   [11]:  Выход из программы.                                           |"  << std::endl
               << L"*========================================================================*"  << std::endl
               << L">>> ";
    //TODO: Проверка вводных данных
    std::wcin >> choiceMenuPoint;
}


// Обработчик главного меню
void Menu::runWork(){
    MathWork lab2(variant);
    ArrayWork lab4(variant);

    switch(Menu::choiceMenuPoint)
    {
    case 1:
        lab2.work();
        break;

    case 2:
        lab4.work();
        break;

    case 3:
        lab4.work();
        break;

    case 4:
        lab4.work();
        break;

    case 5:
        lab4.work();
        break;

    case 6:
        lab4.work();
        break;

    case 7:
        lab4.work();
        break;

    case 8:
        lab4.work();
        break;

    case 9:
        lab4.work();
        break;

    case 10:
        system("cls");
        Menu::enterVariant();
        Menu::mainMenu();
        Menu::runWork();
        break;

    case 11:
        return;
    }
    Menu::backToMenu();
}


// Возврат в меню, выбор вариант или выход из программы
void Menu::backToMenu(){
    std::wcout << std::endl << std::endl;
    std::wcout << L"*================================*" << std::endl
               << L"|   [1]: Для возврата в меню     |" << std::endl
               << L"|   [2]: Для смены варианта      |" << std::endl
               << L"|   [3]: Для выхода из программы |" << std::endl
               << L"|  *=============================*" << std::endl
               << L"|__|>>> ";

    int enter;
    std::wcin >> enter;

    // Обратботка выхода из программы
    if (enter == 3) return;

    // Обработка возврат к "Выбор варианта"
    if (enter == 2){
        system("cls");
        Menu::enterVariant();
        Menu::mainMenu();
        Menu::runWork();
    }

    // Обработка возврат к главному меню
    if (enter == 1){
        system("cls");
        Menu::mainMenu();
        Menu::runWork();
    }
}
