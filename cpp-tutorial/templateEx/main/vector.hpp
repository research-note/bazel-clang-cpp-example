#include "Vector.h"

template <typename T>
Vector<T>::Vector(int n)
{
    datas = new T[n];
    capacity = n;
    size = 0;
    tail = datas;
}

template <typename T>
Vector<T>::~Vector()
{
    delete[] datas;
}