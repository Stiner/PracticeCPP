//
//  Practice 1
//      C++ styled pointer
//

#include <iostream>

class Data
{
public:
    int a;

    Data();
    ~Data();
};

Data::Data() : a(0) { std::cout << "C" << std::endl; }
Data::~Data() { std::cout << "D" << std::endl; }

int Practice1(int argc, char** argv)
{
    int bufferSize = 10;
    Data* pBuffer = new Data[10];
    if (pBuffer)
    {
        for (int i = 0; i < bufferSize; ++i)
        {
            (pBuffer + i)->a = i;
        }

        delete[] pBuffer; pBuffer = nullptr;
    }

    return 0;
}
