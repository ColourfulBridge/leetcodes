#include <iostream>
using namespace std;
typedef long long LL;
//求a^b % m,递归写法
LL binaryPow(LL a, LL b, LL m)
{
    if (b == 0)
        return 1; //如果b为0,则a^0=1
    //b为奇数，转换为b-1
    if (b % 2 == 1)
        return a * binaryPow(a, b - 1, m) % m;
    //b为偶数，转换为b/2
    else
    {
        LL mul = binaryPow(a, b / 2, m);
        return mul * mul % m;
    }
}
int main(int argc, char* argv[])
{
      cout << "Hello world!" << endl;
      int a,b,m;
      cin >> a >> b >> m;
      cout << binaryPow(a,b,m) << endl;
      return 0;
}