#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    int n;
    string temp;
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    stack<int> s1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == "push")
        {
            int num = 0;
            cin >> num;
            s1.push(num);
        }
        else if (temp == "pop")
        {
            if (s1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << s1.top() << "\n";
                s1.pop();
            }
        }
        else if (temp == "size")
        {
            cout << s1.size() << "\n";
        }
        else if (temp == "empty")
        {
            if (s1.empty())
            {
                cout << "1"
                     << "\n";
            }
            else
                cout << "0"
                     << "\n";
        }
        else if (temp == "top")
        {
            if (s1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
                cout << s1.top() << "\n";
        }
    }
}