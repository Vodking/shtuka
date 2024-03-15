#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	float digitcount = 0;
	int zeroCount = 0;
	float sum = 0;
	int curdigit;
	int razmer;
	float ariph;
	while (true)
	{
		std::cout << "Введите число: \n";
		std::cin >> num;
		for (int i = 1; i < num; i *= 10)
		{
			razmer = i;
		}
		for (;razmer != 0; razmer /= 10)
		{
			digitcount++;
			curdigit = num / razmer;
			sum += num / razmer;
			num -= curdigit * razmer;
			
			if (curdigit == 0)
			{
				zeroCount++;
			}
			
		}
		ariph = sum / digitcount;
		std::cout << "Цифр - " << digitcount << " Сумма - " << sum << " Кол-во нулей - " << zeroCount << " Среднее ариф - " << ariph << "\n";
	}
		
	return 0;
}