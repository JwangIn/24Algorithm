#include <iostream>
#include "Sort.h"
#include "InputReference.h"
#include "Pow.h"
#include "DivideAndConquer.h"
#include <ctime>

int main()
{
	//bubbleExample();
	//selectionExample();
	//InputExample();
		
	std::cout << "a의 제곱수 구하기 : ";
	std::cout << Pow(2, 5);

	std::cout << "병합 정렬" << std::endl;
	int list[8] = { 7,6,5,8,3,5,9,1 };
	MergeSort(list, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "퀵선택" << std::endl;

	srand(time(0));

	std::vector<int> someVec = { 12,1,4,8,6,7,3 };
	// std::cout << QuickSelect(someVec, 2);

	QuickSort(someVec, 0, someVec.size() - 1);
	for (int num : someVec)
	{
		std::cout << num << " ";
	}

	std::cout << std::endl;

	std::vector<int> someVec2 = { 12,1,4,8,6,7,3 };

	QuickSort2(someVec2, 0, someVec2.size() - 1);
	for (int num : someVec)
	{
		std::cout << num << " ";
	}
}