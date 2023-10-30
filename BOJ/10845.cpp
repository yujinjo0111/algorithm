#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<int> q1;
    int n;
    string temp;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == "push")
        {
            int m;
            cin >> m;
            q1.push(m);
        }
        if (temp == "pop")
        {
            if (q1.empty())
                cout << "-1"
                     << "\n";
            else
            {
                cout << q1.front() << "\n";
                q1.pop();
            }
        }
        if (temp == "size")
        {
            cout << q1.size() << "\n";
        }
        if (temp == "empty")
        {
            if (q1.empty())
                cout << "1"
                     << "\n";
            else
                cout << "0"
                     << "\n";
        }
        if (temp == "front")
        {
            if (q1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
                cout << q1.front() << "\n";
        }
        if (temp == "back")
        {
            if (q1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
                cout << q1.back() << "\n";
        }
    }
}