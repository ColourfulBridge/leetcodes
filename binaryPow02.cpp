#include <iostream>
using namespace std;
typedef long long LL;
//求a^b % m,迭代写法
LL binaryPow(LL a, LL b, LL m)
{
    LL ans = 1;
    while (b > 0)
    {
        if (b & 1) //如果b的二进制末尾为1，即b为奇数
        {
            ans = ans * a % m; //令ans累积上a
        }
        a = a * a % m; //令a平方
        b >>= 1;       //将b的二进制右移1位
    }
    return ans;
}
int main(int argc, char *argv[])
{
    int a, b, m;
    cin >> a >> b >> m;
    cout << binaryPow(a, b, m) << endl;
    return 0;
}