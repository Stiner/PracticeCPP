//
//  Extensions
//

#include "Extensions.h"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

static clock_t gTime = 0;

void BeginTime()
{
    gTime = clock();
}

void EndTime()
{
    gTime = clock() - gTime;
    printf("%ld\n", gTime);
    gTime = 0;
}

int* AllocationHeapArray(int arrLength)
{
    srand((int)time(0));

    int* pBuffer = (int*)malloc(sizeof(int) * arrLength);
    if (!pBuffer)
        return 0;

    memset(pBuffer, 0, sizeof(int) * arrLength);

    for (int i = 1; i < arrLength + 1; ++i)
    {
        int idx = (rand() % arrLength);
        if (pBuffer[idx] == 0)
        {
            pBuffer[idx] = i;
        }
        else
        {
            --i;
            continue;
        }
    }

    return pBuffer;
}
