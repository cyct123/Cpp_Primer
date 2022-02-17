#include <iostream>

int main()
{
	int i = 0, &r1 = i; double d = 0, &r2 = d;
	r2 = 3.14159;
	std::cout << d << r2 << std::endl; // 3.14159  3.14159
	r2 = r1;
	std::cout << d << r2 << std::endl; // 0 0 
	i = r2;
	std::cout << i << r1 << std::endl; // 0 0 
	r1 = d;
	std::cout << i << r1 << std::endl; // 0 0 
}
