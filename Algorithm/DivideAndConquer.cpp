#include "DivideAndConquer.h"
#include <iostream>
#include <vector>

void MergeSort(int list[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		MergeSort(list, left, mid);// 왼쪽 정렬
		MergeSort(list, mid + 1, right);// 오른쪽 정렬
		Merge(list, left, mid, right);// merge
	}
	
	
}

// 정복과 통합
void Merge(int list[], int left, int mid, int right)
{
	int leftidx = left;
	int rightidx = mid + 1;
	

	std::vector<int> sorted;

	// 왼쪽파트와 오른쪽 파트를 비교해서 작은 수 부터 정렬된 공간에 저장을 한다.
	while (leftidx<=mid && rightidx<=right)
	{
		// 비교하여서 왼쪽이 작은 경우에 sorted 현재 index 저장한다.
		// 만약에 수가 중복이 되면 왼쪽 인덱스에 출력한다.
		if (list[leftidx] <= list[rightidx])
		{
			sorted.push_back(list[leftidx]);
			//sorted[key] = list[leftidx];
			leftidx++;
		}
		else if (list[leftidx] > list[rightidx])
		{
			sorted.push_back(list[rightidx]);
			//sorted[key] = list[rightidx];
			rightidx++;
		}
		
	}
	// 남은 데이터가 있다면 출력해준다.
	if (rightidx >= left)
	{
		for (int i = leftidx; i <= mid; i++)
		{
			sorted.push_back(list[i]);
		}
	}
	else
	{
		for (int i = rightidx; i <= right; i++)
		{
			sorted.push_back(list[i]);
		}
	}

	// 정렬된 데이터를 list값으로 전달해준다.
	
	for (int i = 0; i < sorted.size(); i++)
	{
		list[left+i] = sorted[i];
	}
	

}
