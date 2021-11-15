#include <iostream>
#include <stdlib.h>
#include <exception>
class Massiv {

private:
    bool proverka(int& num)
    {
        if(num >= -100 && num <= 100)
        {
            return true;
        }

        return false;
    }

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
        for (int i = 0; i < len; ++i) std::cout << array[i];
    }

    void setter(int num, int setterIndex) {
        if (num >= -100 && num <= 100) throw std::invalid_argument("YA SDELAL");
        if (setterIndex < len && setterIndex >= 0) throw std::range_error("HVATIT VALIT PJ");
    }

    void getter(int getterIndex)
    {
        if (getterIndex < len) throw std::range_error("1 point tochno est");
    }

    void copy(Massiv from, Massiv to)
    {
        for (int i = 0; i < len; i++) to.array[i] = from.array[i];
    }
    void push_back(int num)
    {
        int* n_array = new int[len + 1];
        if (proverka(num) == false) throw std::range_error("HENTAI");
        
        for(int i = 0; i < len; ++i)
        {
            n_array[i] = array[i];
        }
        n_array[len] = num;

        delete[] array;
        array = n_array;
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