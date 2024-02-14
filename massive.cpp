#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;
int main()
{
	int o = 1;
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	setlocale(0, "");
	const int numsone = 5;
	const int numstwo = 5;
	const int numsthre = 5;
	int numbers[numsone][numstwo][numsthre];
	
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int l = 0; l < 6; l++)
			{
				cout << i + 1 << " введите три числа с клавиатуры ";
				cin >> numbers[numsone][numstwo][numsthre];

				double someone += numbers[numsone] / 5; //их разделить????
				double sometwo += numbers[numstwo] / 5;
				double somwthree += numbers[numsthre] / 5;
				double summ += numbers[numsone][numstwo][numsthre] / 5;
			}
		}
	}

	cout << summ << " " << someone << " " << sometwo << " " << somwthree << " " <<  " - средние арифметическое"
	//цикл для вывода массива и среднего арифметического каждого массива внутри
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int l = 0; l < 6; l++)
			{
				cout << numbers[numsone][numstwo][numsthre] << "\t";

			}
		}
	}
	//макс и мин значения
	
}


