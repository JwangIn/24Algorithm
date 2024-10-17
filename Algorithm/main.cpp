#include <iostream>
#include "Sort.h"
#include "InputReference.h"
#include "Pow.h"
#include "DivideAndConquer.h"

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
}