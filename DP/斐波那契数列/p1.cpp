#include <iostream>
using namespace std;

int fib(int N)
{
    //1.确定dp数组及下标含义
    //第i个数的斐波那契数列数值是dp[i]
    //2.确定递推公式
    //dp[i]=dp[i-1]+dp[i-2]
    //3.dp数组如何初始化
    //dp[0]=0;
    //dp[1]=1;
    //4.确定遍历顺序
    //从递推公式来看，遍历的顺序是从前到后遍历的
    if (N <= 1)
        return N;
    int *dp = new int[N + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[N];
}
int main(int argc, char *argv[])
{
    cout << fib(10) << endl;
}