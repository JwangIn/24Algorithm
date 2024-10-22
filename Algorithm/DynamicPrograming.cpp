#include "DynamicPrograming.h"
#include <iostream>


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

