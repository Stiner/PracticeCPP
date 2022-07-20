//
//  Practice 3
//      Sorting
//

#include "Extensions.h"

#define LENGTH 10

/// <summary>
/// 선택정렬
/// </summary>
void SelectionSort()
{
    int* arr = AllocationHeapArray(LENGTH);

    BeginTime();
    for (int i = 0; i < LENGTH; ++i)
    {
        int s = i;
        for (int j = i + 1; j < LENGTH; ++j)
        {
            if (arr[s] > arr[j])
                s = j;
        }

        if (i != s)
        {
            int t = arr[i];
            arr[i] = arr[s];
            arr[s] = t;
        }
    }
    EndTime();

    delete[] arr;
}

int Practice3(int argc,  char** argv)
{
    SelectionSort();

    return 0;
}
