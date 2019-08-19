#ifndef MATHWORK_H
#define MATHWORK_H
#include <iostream>

class MathWork
{
private:
    double a,b,c;
    int variable;

    void enterVariable();
    bool checkEnterData(float num);

    void enterVar(std::wstring nameVar, double *num);

    double maxNum(double a, double b, double c); // Возвращает максимальный элемент
    double minNum(double a, double b, double c); // Возвращает минимальный элемент

public:
    MathWork(int var);
    void work();

};

#endif // MATHWORK_H
