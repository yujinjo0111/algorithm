#include <iostream>
#include <algorithm>

using namespace std;

bool IsPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(void)
{
    int n, m;
    bool a;
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (IsPrime(i))
            cout << i << '\n';
    }
}

// 배열을 만들어서 소수는 0, 소수가 아닌 수는 1을 저장해서
// 0을 저장한 배열만 출력하도록 하는 방식