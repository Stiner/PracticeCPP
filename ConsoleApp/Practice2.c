//
//  Practice 2
//      C styled pointer
//

#include <stdlib.h>
#include <string.h>

int Practice2(int argc, char** argv)
{
    int bufferSize = 10;
    char* pBuffer = (char*)malloc(sizeof(char) * bufferSize);
    if (pBuffer)
    {
        memset(pBuffer, 0, sizeof(char) * bufferSize);

        for (int i = 0; i < bufferSize; ++i)
        {
            *((char*)pBuffer + i) = ' ' + (char)i;
        }

        free(pBuffer); pBuffer = 0;
    }

    return 0;
}
