#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	char gend;
	std::string zodiacSign;
	int age;
	std::cout << "Enter gender: "; std::cin >> gend;
	std::cout << "Enter zodiac sign: "; std::cin >> zodiacSign;
	std::cout << "Enter age: "; std::cin >> age;
	if ((age < 40) && (gend == 'm' || gend == 'M') && (zodiacSign == "Cencer" || zodiacSign == "Skorpio" || zodiacSign == "Pisces"))
	{
		std::cout << "Today is a very fruitful day. You can achieve what previously seemed almost impossible." << std::endl;
	}
	else if ((gend == 'f' || gend == 'F') && (age <= 30 && age >= 15) && (zodiacSign == "Virgo" || zodiacSign == "Taurus" || zodiacSign == "Capricorn"))
	{
		std::cout << "This evening is perfect for socializing with friends, hosting family celebrations, and impromptu parties." << std::endl;
	}
	else
	{
		std::cout << "Your horoscope is currently in development.Come back a little later;)" << std::endl;
	}
	return 0;