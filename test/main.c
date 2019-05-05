#define CTEST_MAIN

#include "../thirdparty/ctest.h"
#include "tests.c"

int main(int argc, const char* argv[])
{
    int result = ctest_main(argc, argv);
    return result;
}