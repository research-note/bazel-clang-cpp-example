#include "MyVector.h"
#include <iostream>

template <typename T>
MyVector<T>::MyVector(int n)
{
    datas = new T[n];
    nextIdx = 0;
    length = n;
}

template <typename T>
MyVector<T>::~MyVector()
{
    delete[] datas;
}

template <typename T>
T& MyVector<T>::operator[](int idx)
{
    if(idx<0 || idx>=nextIdx) 
    {
        std::cout<<"Array index out of bound exception"<<std::endl;
        exit(1);
    }

    return datas[idx];
}

template <typename T>
void MyVector<T>::push_back(const T& value) 
{
    datas[nextIdx++] = value;
}

template <typename T>
int MyVector<T>::size()
{
    return nextIdx;
}

template <typename T>
int MyVector<T>::capacity()
{
    return length;
}