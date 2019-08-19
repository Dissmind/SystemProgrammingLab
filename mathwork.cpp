#include <iostream>
#include <cmath>

#include "mathwork.h"
#include "checkdate.h"

MathWork::MathWork(int variable)
{
    this -> variable = variable;
}




void MathWork::enterVar(std::wstring nameVar, double *num){
    while(true){
        std::wcout << L"Введите значение " << nameVar << ": ";
        std::wcin >> *num;
        if(CheckDate::rangeMath(*num)) break;
        *num = 0;
        std::wcout << std::endl << L"Вводные данные не коректны! Повторите попытку.";
        std::wcout << std::endl;
    }
}


void MathWork::enterVariable(){
    enterVar(L"A", &a);
    enterVar(L"B", &b);
    enterVar(L"C", &c);
}



double MathWork::maxNum(double a, double b, double c){
    if (a > b && a > c) return a;
    if (b > a && b > c) return b;
    return c;
}



double MathWork::minNum(double a, double b, double c){
    if (a < b && a < c) return a;
    if (b < a && b < c) return b;
    return c;
}

void MathWork::work(){
    system("cls");
    std::wcout << L"Хлопицкий Алексей Денисович ПКС17-3К" << std::endl;
    double result;
    std::wcout << L"Пример для вычисления: ";
    switch(variable)
    {
    case 1:
        std::wcout << L"b^2 - 4 * (a / c)" << std::endl << std::endl;
        enterVariable();
        result = pow(b,2) - 4 * (a / c);
        break;

    case 2:
        std::wcout << L"(log10 b) / (a + c)" << std::endl << std::endl;
        enterVariable();
        result = (log10(b)) / (a + c);
        break;

    case 3:
        std::wcout << L"(cos(b)) / (a % c)" << std::endl << std::endl;
        enterVariable();
        result = (cos(b)) / ((a * c) / 100);
        break;

    case 4:
        std::wcout << L"((b + 1) / a )/ max(a,b,c)" << std::endl << std::endl;
        enterVariable();
        result = ((b + 1) / a )/ maxNum(a,b,c);
        break;

    case 5:
        std::wcout << L"(min(a,b,c) / a - c ) - c" << std::endl << std::endl;
        enterVariable();
        result = (minNum(a,b,c) / a - c ) - c;
        break;

    case 6:
        std::wcout << L"sin(1/a) + b^c" << std::endl << std::endl;
        enterVariable();
        result = sin((1 / a)) + pow(b,c);
        break;

    case 7:
        std::wcout << L"ln(b) + c / a" << std::endl << std::endl;
        enterVariable();
        result = log(a) + c / a;
        break;

    case 8:
        std::wcout << L"ln(b) + c / a" << std::endl << std::endl;
        enterVariable();
        result = log(a) + c / a;
        break;

    case 9:
        std::wcout << L"tng(a * b) - 1 / c" << std::endl << std::endl;
        enterVariable();
        result = tan(a * b) - 1 / c;
        break;

    case 10:
        std::wcout << L"sqrt((min(a,b,c)) + c / 2)" << std::endl << std::endl;
        enterVariable();
        result = sqrt(minNum(a,b,c)) + c / 2;
        break;

    }
    std::wcout << std::endl << L"Ответ: " << result;
}
