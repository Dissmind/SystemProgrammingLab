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

    int v;
    int arraySize;

    int enterArraySize();
    void enterDateIntegerArray(int *array);

    int initTypeArray(int v);
    void fillArray(int *array);
public:
    ArrayWork(int var);
    void work();
};

#endif // ARRAYWORK_H
