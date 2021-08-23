#include <iostream>
using namespace std;
//1.dp数组定义
//dp[i][j]表示从(0,0)到(i,j)的不同路径数
//2.递推公式
//dp[i][j]=dp[i][j-1]+dp[i-1][j];
//3.初始化数组
//dp[i][0]=0;dp[0][j]=0;
//4.确定遍历顺序
//从上向下，从左向右遍历
//5.举例推导dp数组

int uniquePaths(int m, int n)
{
    int dp[][]=new int[m][n];
    //初始化
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

        }
    }
}

int main(int argc, char *argv[])
{
    //行数m，列数n
    int m, n;
    cin >> m >> n ;
    cout << uniquePaths(m, n) << endl;
}