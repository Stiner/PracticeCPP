//
//  Practice 4
//      Little Endian
//

#include <stdlib.h>
#include <string.h>

#define LENGTH (10)

int Practice4(int argc, char** argv)
{
    int pTest[LENGTH];

    memset(pTest, 0, sizeof(int) * LENGTH);

    for (int i = 0; i < LENGTH; ++i)
    {
        *(pTest + i) = i + 0xaabbcc00;
    }

    return 0;
}
