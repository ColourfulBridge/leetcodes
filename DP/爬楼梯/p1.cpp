#include <iostream>
using namespace std;
//确定dp数组以及下标的含义
//dp[i]:爬到第i层楼梯，有dp[i]中方法
//2.确定递推公式
//dp[i]=dp[i-1]+dp[i-2]
//3.dp数组初始化
//dp[1]=1,dp[2]=2
//4.确定遍历顺序
//从递推式可以看出dp[i]=dp[i-1]+dp[i-2]
//5.举例推导dp数组
int climbStairs(int n)
{
    if (n <= 1)
        return n;
    int *dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int climbStairs1(int n)
{
    if (n <= 1)
        return n;
    int *dp = new int[n + 1];
    int pre1 = 1;
    int pre2 = 2;
    for (int i = 3; i <= n; i++)
    {
        int temp = pre2;
        pre2 = pre1 + pre2;
        pre1 = temp;
    }
    return pre2;
}
int main(int argc, char *argv[])
{
    cout << climbStairs(10) << endl;
    cout << climbStairs1(10) << endl;
}