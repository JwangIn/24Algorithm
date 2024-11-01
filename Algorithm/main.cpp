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

	std::vector<int> someVec = { 12,1,4,8,6,7,3 };

	std::cout << "퀵선택" << std::endl;
	//std::cout << QuickSelect(someVec,3) << std::endl;

	srand(time(0));
	
	QuickSort(someVec, 0, someVec.size() - 1);
	for (int num : someVec)
	{
		std::cout << num << " ";
	}

	system("cls");

	std::cout << "재귀 방식 : 피보나치 수열" << std::endl;
	
	int count = 10;

	std::cout << "피보나치 수 : " << Fibonacci(count) << std::endl;
	std::cout << "피보나치 시간 : " << measureExecutionTime(Fibonacci,count)<<"ms" << std::endl;

	std::cout << "동적 계획법 방식 : 피보나치 수열" << std::endl;

	int count2 = 10;

	std::cout << "피보나치 수 : " << FibonacciDP(count2) << std::endl;
	std::cout << "피보나치 시간 : " << measureExecutionTime(FibonacciDP, count2) << "ms" << std::endl;


	std::cout << "계단 오르기 문제 (메모이제이션)" << std::endl;
	std::vector<int> stairs = { 10,20,15,25,10,20 };
	std::cout<<"계단의 수가 " << stairs.size() <<"일 때 최대 값 : " << stairCount(stairs) << std::endl;

	Case002();
		
	Permutation::Case01();
	std::cout << "조합" << std::endl;
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