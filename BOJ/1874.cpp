#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int m = 1;
    stack<int> s;
    vector<char> result;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        while (m <= temp)
        {
            s.push(m);
            m += 1;
            result.push_back('+');
        }
        if (s.top() == temp)
        {
            s.pop();
            result.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
}