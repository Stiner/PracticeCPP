//
//  Main
//

#include <stdlib.h>

int Practice1(int argc, char** argv);
extern "C" int Practice2(int argc, char** argv);
int Practice3(int argc, char** argv);
extern "C" int Practice4(int argc, char** argv);
extern "C" int Practice5(int argc, char** argv);

typedef int (*DelegatePractice)(int, char**);

int main(int argc, char** argv)
{
    DelegatePractice g_pPracticeFunc = Practice5;

    return g_pPracticeFunc(argc, argv);
}
