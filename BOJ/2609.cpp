#include <iostream>
#include <algorithm>

using namespace std;
int gcd(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2, num1 % num2);
    }
}
int lcm(int num1, int num2)
{
    int gcd_result = gcd(num1, num2);
    return (num1 * num2) / gcd_result;
}
int main()
{
    int n1, n2;
    int result, result2;
    cin >> n1 >> n2;
    result = gcd(n1, n2);
    cout << result << "\n";
    result2 = lcm(n1, n2);
    cout << result2 << "\n";

    return 0;
}