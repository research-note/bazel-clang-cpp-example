#include "MyVector.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    MyVector<int> v;
    v.push_back(10);
    cout<<v[0]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}
