#ifndef __VECTOR_H__
#define __VECTOR_H__

template <typename T>
class Vector
{
    private:
        T *datas;
        int capacity;
        int size;
        int *tail;
    public:
        Vector(int n = 8);
        ~Vector();
};

#include "Vector.hpp"
#endif