#include "Fibonacci.h"

int fiboLvl0(int n){
    int numOfAddition = 0;
    int nMinusDwa = 0, nMinusJeden = 1, nElement = 0;

    if (n <= 1) return n;
    else {
        for (int i = 2; i <= n; i++)
        {
            numOfAddition++;
            std::cout << nMinusDwa << " + " << nMinusJeden << std::endl;
            nElement = nMinusDwa + nMinusJeden;
            nMinusDwa = nMinusJeden;
            nMinusJeden = nElement;
        }
    }
    std::cout << numOfAddition;
    return nElement;
}

int fiboLvl1(int n) {
    int numOfAddition = 0;
    if (n <= 1) {
        return n;
    }
    else {
        numOfAddition++;
        std::cout << numOfAddition;
        return fiboLvl1(n - 1) + fiboLvl1(n - 2);
    }
}
int fiboLvl2(int n) {

    int numOfAddition = 0;
    int* memoryArr;
    memoryArr = new int[n];

    for (int i = 0; i < n; i++)
    {
        memoryArr[i] = 0;
    }
    if (n <= 1) {
        return n;
    }

    else if (memoryArr[n - 1] != 0)
        return memoryArr[n - 1];
    else {
        numOfAddition++;
        std::cout << numOfAddition;
        return memoryArr[n - 1] = fiboLvl2(n - 1) + fiboLvl2(n - 2);
    }
}

int fiboLvl3(int n, int a = 0, int b = 1)
{
    int numOfAddition = 0;
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    numOfAddition++;
   // std::cout << "n: " << n << " a: " << a << " b: " << b << std::endl;
   // std::cout << numOfAddition;
    return fiboLvl3(n - 1, b, a + b);
}


