#include "IterativeFVib.h"

int numOfAdition = 0;

unsigned int fib(int n)
{

    int a, b;
    if (n == 0) return 0;

    a = 0; b = 1;
    for (int i = 0; i < (n - 1); i++){
        std::swap(a, b);
        b += a;
        numOfAdition++;
    }
    return b;
}
