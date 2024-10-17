#include "DivideAndConquer.h"
#include <iostream>
#include <vector>

void MergeSort(int list[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		MergeSort(list, left, mid);// ���� ����
		MergeSort(list, mid + 1, right);// ������ ����
		Merge(list, left, mid, right);// merge
	}
	
	
}

// ������ ����
void Merge(int list[], int left, int mid, int right)
{
	int leftidx = left;
	int rightidx = mid + 1;
	

	std::vector<int> sorted;

	// ������Ʈ�� ������ ��Ʈ�� ���ؼ� ���� �� ���� ���ĵ� ������ ������ �Ѵ�.
	while (leftidx<=mid && rightidx<=right)
	{
		// ���Ͽ��� ������ ���� ��쿡 sorted ���� index �����Ѵ�.
		// ���࿡ ���� �ߺ��� �Ǹ� ���� �ε����� ����Ѵ�.
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
	// ���� �����Ͱ� �ִٸ� ������ش�.
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

	// ���ĵ� �����͸� list������ �������ش�.
	
	for (int i = 0; i < sorted.size(); i++)
	{
		list[left+i] = sorted[i];
	}
	

}
