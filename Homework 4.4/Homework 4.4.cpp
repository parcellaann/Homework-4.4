// Homework 4.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	std::cout << "Enter the number of array elements:\n";
	int count = 0;
	std::cin >> count;
	std::cout << "Enter the array elements:\n";
	int *arr = new int[count];
	for (int i = 0; i < count; i++)
		std::cin >> arr[i];

	int min = arr[0], max = arr[0], sum = 0;
	for (int i = 0; i < count; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		sum += arr[i];
	}
	delete arr;
	std::cout << "Minimal element: " << min << "\n";
	std::cout << "Maximal element: " << max << "\n";
	std::cout << "Sum: " << sum << "\n";
	std::cout << "Average: " << ((float)sum / (float)count) << "\n";
}