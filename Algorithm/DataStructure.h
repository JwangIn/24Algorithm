#pragma once

// 1. ������ ����ϴ� ���
#include <stack>
#include <queue>
using namespace std;

void Data001()
{
	// 1. ������ �������ش�.

	stack<int> myStack;

	// 2. ��ɾ�

	// �Է�
	myStack.push(1);

	// ������ ����� ����Ű�� ��
	int value = myStack.top();

	// ������ �����͸� ����
	myStack.pop();

	// �����Ͱ� ������� �ƴ��� Ȯ���ϴ� �Լ�
	if (myStack.empty())
	{
		int value = myStack.top();
	}

	
}


void Data002()
{
	queue<int> MyQueue;

	MyQueue.push(1);
	MyQueue.pop();
	MyQueue.size();
	MyQueue.front();
}

#include <deque>

void Data003()
{
	deque<int> myDeque;

	myDeque.pop_back();
	myDeque.pop_front();

	myDeque.push_back(1);
	myDeque.push_front(2);

	
}