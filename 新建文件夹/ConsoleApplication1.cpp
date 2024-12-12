#include <iostream>
using namespace std;


int gongyueshu(int m,int n)
{
    int b = m > n ? m : n;
    int a = m > n ? n : m;
    for (; a >0; a--)
    {
        if (m % a == 0 && n % a == 0)
        {
            break;
        }
    }
    return a;
}
int gongbeishu(int m,int n)
{
    int a = m > n ? m : n;
    for (;; a++)
    {
        if (a % m == 0 && a % n == 0)
        {
            break;
        }
    }
    return a;

}
int main()
{
    int m, n;
    cin >> m >> n;
    int a = gongyueshu(m, n);
    int b = gongbeishu(m, n);
    printf("最大公约数是%d\n", a);
    printf("最大公倍数是%d\n", b);
    return 0;

}

