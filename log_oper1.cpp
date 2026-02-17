#include <iostream>
#include <iomanip>
#include <locale.h>

int main()
{
	bool var1{ 1 }, var2{ 1 };
	bool var3{ 0 }, var4{ 0 };
	std::cout << std::boolalpha;
	std::cout << "Operator: ||" << std::endl
		<< std::setiosflags(std::ios::left) << std::setw(8) << var1 << std::setw(8) << var2 << std::setw(8) << (var1 || var2) << std::endl
		<< std::setw(8) << var3 << std::setw(8) << var1 << std::setw(8) << (var3 || var1) << std::endl
		<< std::setw(8) << var1 << std::setw(8) << var3 << std::setw(8) << (var1 || var3) << std::endl
		<< std::setw(8) << var3 << std::setw(8) << var4 << std::setw(8) << (var3 || var4) << std::endl;
	std::cout << std::endl << "Operator: &&" << std::endl
		<< std::setiosflags(std::ios::left) << std::setw(8) << var1 << std::setw(8) << var2 << std::setw(8) << (var1 && var2) << std::endl
		<< std::setw(8) << var3 << std::setw(8) << var1 << std::setw(8) << (var3 && var1) << std::endl
		<< std::setw(8) << var1 << std::setw(8) << var3 << std::setw(8) << (var1 && var3) << std::endl
		<< std::setw(8) << var3 << std::setw(8) << var4 << std::setw(8) << (var3 && var4) << std::endl;
	return 0;
}
