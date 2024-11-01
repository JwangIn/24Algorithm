#include <iostream>
#include "Sort.h"
#include "InputReference.h"
#include "Pow.h"
#include "DivideAndConquer.h"
#include <ctime>
#include "DynamicPrograming.h"
#include "TimeChecker.h"
#include "Greedy.h"
#include "BackTracking.h"
#include "array2D.h"
#include "graph.h"
#include "MST.h"

int main()
{
	//bubbleExample();
	//selectionExample();
	//InputExample();
		
	std::cout << "a�� ������ ���ϱ� : ";
	std::cout << Pow(2, 5);

	std::cout << "���� ����" << std::endl;
	int list[8] = { 7,6,5,8,3,5,9,1 };
	MergeSort(list, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;

	std::vector<int> someVec = { 12,1,4,8,6,7,3 };

	std::cout << "������" << std::endl;
	//std::cout << QuickSelect(someVec,3) << std::endl;

	srand(time(0));
	
	QuickSort(someVec, 0, someVec.size() - 1);
	for (int num : someVec)
	{
		std::cout << num << " ";
	}

	system("cls");

	std::cout << "��� ��� : �Ǻ���ġ ����" << std::endl;
	
	int count = 10;

	std::cout << "�Ǻ���ġ �� : " << Fibonacci(count) << std::endl;
	std::cout << "�Ǻ���ġ �ð� : " << measureExecutionTime(Fibonacci,count)<<"ms" << std::endl;

	std::cout << "���� ��ȹ�� ��� : �Ǻ���ġ ����" << std::endl;

	int count2 = 10;

	std::cout << "�Ǻ���ġ �� : " << FibonacciDP(count2) << std::endl;
	std::cout << "�Ǻ���ġ �ð� : " << measureExecutionTime(FibonacciDP, count2) << "ms" << std::endl;


	std::cout << "��� ������ ���� (�޸������̼�)" << std::endl;
	std::vector<int> stairs = { 10,20,15,25,10,20 };
	std::cout<<"����� ���� " << stairs.size() <<"�� �� �ִ� �� : " << stairCount(stairs) << std::endl;

	Case002();
		
	Permutation::Case01();
	std::cout << "����" << std::endl;
	Combine::Case02();

	system("cls");

	//Board::Case1();
	//Board::Case2();
	//Board::Case3();

	//GraphVec::Print();

	//InputGraph::Show();

	InputWeight::Show1();
	InputWeight::Show2();
}