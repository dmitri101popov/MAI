#include <iostream>
#include <stdlib.h>
class Massiv {

public:
    int* array;

    int len;
    Massiv(int lenParameter): len(lenParameter)
    {
        array = (int*)malloc(len * sizeof(int));
    }
    ~Massiv()
    {
        delete[] array;
    }

    void show()
    {
        std::cout << array;
    }

    void setter(int num, int setterIndex) {
        if (num >= -100 && num <= 100 && setterIndex < len)
        {
            array[setterIndex] = num;

        }
    }

    void getter(int getterIndex)
    {
        if (getterIndex < len) std::cout << array[getterIndex];
    }

    void copy(Massiv from, Massiv to)
    {
        for (int i = 0; i < len; i++) to.array[i] = from.array[i];
    }
    void beyond(int num)
    {
        if (num >= -100 && num <= 100)
        {
            len += 1;
            delete[] array;
            array[len - 1] = num;
        }
    }

};


void sum(Massiv* array1, Massiv* array2)
{
    for (int i = 0; i < array1->len; i++)
    {
       array1->array[i] += array2->array[i];
    }
}


int main() {

}