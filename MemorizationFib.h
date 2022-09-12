#pragma once
class MemorizationFib
{
public:
	int n{};

private:
	int function memoize(fn);
	unsigned int fib(int n);
};

