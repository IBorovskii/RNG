#include <iostream>

int main()
{
	long long N = 0;
	std::cout << "Enter N "; //  задаем модуль (N)
	std::cin >> N; // получаем пользовательское число и сохраняем его в переменную N
	std::cout << "You entered " << N << std::endl;
	long long c = 0;
	std::cout << "Enter c "; // задаем приращение (c)
	std::cin >> c; // получаем пользовательское число и сохраняем его в переменную c
	std::cout << "You entered " << c << std::endl;	std::cout << "Enter x0 "; // задаем начальное значение (x0)
	long x0 = 0;
	std::cin >> x0; // получаем пользовательское число и сохраняем его в переменную x0
	std::cout << "You entered " << x0 << std::endl;
	long long a = 0;
	std::cout << "Enter a "; // задаем множитель (a)
	std::cin >> a; // получаем пользовательское число и сохраняем его в переменную a
	std::cout << "You entered " << a << std::endl;
	long long X;
	long long x1;
	x1 = x0;
	long long T = 0;
	long long Z = 0;
	do
	{
		X = ((a * x1) + c) % N;
		if (Z == 10)				// Задаем параметры расположения результатов
		{
			std::cin << std::endl;
			Z = 0;
		}
		std::cout << X << "\t"; // получаем первое значение последовательности
		T += 1;
		Z += 1;
		if (X != x0);
		{
			x1 = X;
		}
	} while (X != x0);

	std::cout << std::endl << "T = " << T << std::endl; // период линейной конгруэнтной последовательности
	return 0;
}