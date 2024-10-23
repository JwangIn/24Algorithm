#include "DynamicPrograming.h"
#include <iostream>

#define DEFAULT -1
std::vector<int> stairDP;

int Fibonacci(int n)
{
    if (n == 0)return 0;
    if (n == 1)return 1;



    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int FibonacciDP(int n)
{
    // 중복되는 사항을 저장을 하고, 필요할 때 마다 사용한다.
    int* dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {        
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    


    return dp[n];
}

int max_stair_recursive(int i, std::vector<int> stairs)
{
    // stairDP 데이터가 -1이 아니면 (데이터 메모가 되어 있으면)
    // 해당 데이터를 리턴
    if (stairDP[i] != -1)
    {
        return stairDP[i];
    }

    // 계단을 오르는 아이디어

    // 계단을 1층을 오를때 가장 큰 데이터
    if (i == 0)
    {
        return stairs[0];
    }
    if (i == 1)
    {
        return stairs[0] + stairs[1];
    }
    if (i == 2)
    {
        return std::max(stairs[0] + stairs[2], stairs[1]);
    }

    stairDP[i] = std::max(max_stair_recursive(i - 2, stairs), max_stair_recursive(i - 3, stairs) + stairs[i-1])+stairs[i];

    return stairDP[i];
}

int stairCount(std::vector<int> stairs)
{
    int size = stairs.size();

    stairDP.assign(size, DEFAULT); // Default값이 -1이다.

    return max_stair_recursive(size - 1, stairs);
}

