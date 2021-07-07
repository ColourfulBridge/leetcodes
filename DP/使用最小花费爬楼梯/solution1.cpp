#include <iostream>
using namespace std;
//1.确定dp数组及含义
//dp[i],到达第i个阶梯所花费的最少体力
//2.确定递推公式
//dp[i]=min(dp[i-2],dp[i-1])+cost[i]
//3.dp数组初始化
//dp[0]=cost[0],dp[1]=cost[1]
//4.确定遍历顺序
//从前往后遍历
//5.举例推导dp数组
int minCostClimbingStairs(int *cost)
{
    int size = sizeof(cost);
    if (size <= 1)
        return cost[size];
    int *dp = new int[size];
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < size; i++)
    {
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
    }
    return min(dp[size - 1], dp[size - 2]);
}

int main(int argc, char *argv[])
{
    int cost[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(cost) << endl;
}