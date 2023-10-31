#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
    int n;
    int m = 1;
    stack<int> s1;
    vector<char> v1;
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        while (m <= temp)
        {
            s1.push(m);
            m += 1;
            v1.push_back('+');
        }
        if (s1.top() == temp)
        {
            s1.pop();
            v1.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\n";
    }
}
