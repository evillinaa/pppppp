#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int num;
	int nums1, nums2, sum1, sum2;

	std::cout << "Введите целое шестизначное число: ";
	std::cin >> num;

	if (num < 100000 || num > 999999)
	{
		std::cout << "\n\t    Ошибка\nВы ввели не шестизначное число\n";
	}
	else
	{
		nums1 = num / 1000;
		nums2 = num % 1000;

		sum1 = (nums1 / 100) + ((nums1 / 10) % 10) + (nums1 % 10);
		sum2 = (nums2 / 100) + ((nums2 / 10) % 10) + (nums2 % 10);

		if (sum1 == sum2)
		{
			std::cout << "\nВы ввели счастливое число\n";
		}
		else
		{
			std::cout << "\nВы не ввели счастливое число\n";
		}
	}*/

	

	/*int num, nums1, nums2;

	std::cout << "Введите целое четырёхзначное число: ";
	std::cin >> num;

	if (num < 1000 || num > 9999)
	{
		std::cout << "\n\t     Ошибка\nВы ввели не четырёхзначное число\n";
	}
	else
	{
		nums1 = num / 100;
		nums2 = num % 100;
		std::cout << "\nИсходное число: " << num;
		std::cout << "\nНовое число: " << nums1 % 10 << nums1 / 10 << nums2 % 10 << nums2 / 10;
	}*/

	

	/*int num, min, max, count = 0;

	std::cout << "Введите число: ";
	std::cin >> num;
	max = num;

	while (count < 6)
	{
		std::cout << "Введите число: ";
		std::cin >> num;

		if (num >= max)
		{
			max = num;
		}

		count++;
	}

	std::cout << "\nМаксимальное число: " << max;*/


	/*float AB, BC, m, v, v1, v2;

	std::cout << "Введите расстояние от пункта А до пункта В (км): ";
	std::cin >> AB;
	std::cout << "Введите расстояние от пункта В до пункта С (км): ";
	std::cin >> BC;
	std::cout << "Введите массу груза (кг): ";
	std::cin >> m;

	if (m <= 500)
	{
		v1 = AB;
		v2 = BC;
	}
	else if (m <= 1000)
	{
		v1 = 4 * AB;
		v2 = 4 * BC;
	}
	else if (m <= 1500)
	{
		v1 = 7 * AB;
		v2 = 7 * BC;
	}
	else if (m <= 2000)
	{
		v1 = 9 * AB;
		v2 = 9 * BC;
	}
	else
	{
		std::cout << "\nМасса груза слишком большая. Самолёт не взлетит.";
	}

	if (v1 > 300)
	{
		std::cout << "\nСамолёту не хватит топлива, чтобы преодолеть расстояние AB";
	}
	if (v2 > 300)
	{
		std::cout << "\nСамолёту не хватит топлива, чтобы преодолеть расстояние BC";
	}
	else
	{
		v1 = 300 - v1;
		v2 = v2 - v1;

		if (v2 <= 0)
		{
			std::cout << "\nСамолёт долетит без дозаправки";
		}
		else
		{
			std::cout << "\nМинимальное кол-во топлива для дозаправки: " << v2 << " л";
		}
	}*/


	return 0;
}