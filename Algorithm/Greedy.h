#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

// 거스름돈 문제
// n원을 5원과 2원으로 거슬러주는데
// 5원으로 거슬러준 후, 남은 돈을 2원으로 거슬러주고, 만약에 잔돈이 남으면 -1, 잔돈의 총 수 출력한다.

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

	// 거슬러줄 동전의 갯수를 출력해주는 함수
	
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