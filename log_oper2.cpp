#include <iostream>
#include <iomanip>
#include <locale.h>

int main()
{
	std::setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	std::cout << "Введите первое число: "; std::cin >> a;
	std::cout << "Введите второе число: "; std::cin >> b;
	std::cout << "Введите третье число: "; std::cin >> c;
	int maxNum{ ((a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c) };
	int midNum{ ((a >= b && a <= c) ? a : (a >= c && a <= b) ? a :
				 (b >= a && b <= c) ? b : (b >= c && b <= a) ? b :
				 (c >= a && c <= b) ? c : (c >= b && c <= a) ? c : 0) };
	int minNum{ ((a <= b && a <= b) ? a : (b <= a && b <= c) ? b :
				 (c <= a && c <= b) ? c : 0) };
	std::cout << std::setiosflags(std::ios::left)
		<< std::setw(3) << maxNum
		<< std::setw(3) << midNum
		<< std::setw(3) << minNum
		<< std::endl;
}