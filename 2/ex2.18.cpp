#include <iostream>

int main()
{
	int a = 12, b = 13;
	int *p = &a;
	std::cout << p << std::endl;
	p = &b;
	std::cout << p << std::endl;
	*p = a;
	std::cout << a << " " << b << std::endl; // 12 12
}