#ifndef _MY_VECTOR_H_
#define _MY_VECTOR_H_

template <typename T>
class MyVector
{
    private:
        T *datas;
        int nextIdx;
        int length;
    public:
        MyVector(int n = 8);
        ~MyVector();
        T& operator[](int idx);
        void push_back(const T& value);
        int size();
        int capacity();
};

#include "MyVector.hpp"
#endif