#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

// �Ž����� ����
// n���� 5���� 2������ �Ž����ִµ�
// 5������ �Ž����� ��, ���� ���� 2������ �Ž����ְ�, ���࿡ �ܵ��� ������ -1, �ܵ��� �� �� ����Ѵ�.

int CountRemainCoin(int n)
{
	int money = n;

	

	for (int i = 0; i * 5 <= n; i++)
	{
		int remain = n - 1 * 5;
		if (remain % 2 == 0)
		{
			int totalCoins = 1 + remain / 2;
			money = std::min(money, totalCoins);
		}
	}

	return money == n ? -1 : money;

	//int coin5 = money / 5;
	//int remain = money % 5;
	//
	//int coin2 = remain / 2;
	//if (remain % 2 != 0)
	//{
	//	coin5--;
	//	coin2=(remain + 5) / 2;
	//}
	//else
	//{
	//	return coin5 + coin2;
	//}

}

void Case001()
{
	int n;
	std::cin >> n;

	// �Ž����� ������ ������ ������ִ� �Լ�
	
}

void Case002()
{
	std::vector<int> vec = {1,2,10,5,6,1,2};
	
	

	std::sort(vec.begin(), vec.end());

	for(int i: vec)
	{
		std::cout << i << " ";
	}
	
}