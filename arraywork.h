#ifndef ARRAYWORK_H
#define ARRAYWORK_H

class ArrayWork
{
private:
    enum TypeArray
    {
        integer,
        natural,
        real
    };

    int variant;
    int arraySize;

    int enterArraySize();
    void enterDateIntegerArray(int *array);

    int initTypeArray(int variant);

public:
    ArrayWork(int var);
    void work();
};

#endif // ARRAYWORK_H
