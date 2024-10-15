#include "Sort.h"
#include <iostream>
#include <algorithm>

void bubbleSort(int list[], int n)
{
	// i�� �ݺ�
	// j�� �� �ݺ�
	for (int j = n - 1; j > 0; j--) // n����Ŭ ����, ��ü�� -1
	{
		for (int i = 0; i < j; i++) // 1����Ŭ ����ŭ �ݺ� (���� ���� �� ���� ����)
		{
			if (list[i] > list[i + 1])
			{
				std::swap(list[i], list[i + 1]);
			}
		}
	}
		
}

void bubbleExample()
{
	int list[5] = { 7,3,6,9,5 };

	bubbleSort(list, 5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << list[i];
	}
	std::cout << std::endl;
		
}

void selectionSort(int list[], int n)
{
	int least;
		
	for (int i = 0; i < n; i++)
	{
		least = i;
		for (int j = i + 1;j<n; j++)
		{
			if (list[j] < list[least])
			{
				least = j;
			}
		}
		if (least != i)
		{
			std::swap(list[i], list[least]);
		}
		
	}
	



}

void selectionExample()
{
	int list[5] = { 7,3,6,9,5 };

	selectionSort(list, 5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << list[i];
	}
	std::cout << std::endl;
}
