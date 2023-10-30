#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;
// 기본 큐에서 앞뒤로 데이터를 넣을 수 있음
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    deque<int> d1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        if (temp == "push_front")
        {
            int m;
            cin >> m;
            d1.push_front(m);
        }
        else if (temp == "push_back")
        {
            int k;
            cin >> k;
            d1.push_back(k);
        }
        else if (temp == "pop_front")
        {
            if (d1.empty())
                cout << "-1"
                     << "\n";
            else
            {
                cout << d1.front() << "\n";
                d1.pop_front();
            }
        }
        else if (temp == "pop_back")
        {
            if (d1.empty())
                cout << "-1"
                     << "\n";
            else
            {
                cout << d1.back() << "\n";
                d1.pop_back();
            }
        }
        else if (temp == "size")
        {
            cout << d1.size() << "\n";
        }
        else if (temp == "empty")
        {
            if (d1.empty())
            {
                cout << "1"
                     << "\n";
            }
            else
                cout << "0"
                     << "\n";
        }
        else if (temp == "front")
        {
            if (d1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << d1.front() << "\n";
            }
        }
        else if (temp == "back")
        {
            if (d1.empty())
            {
                cout << "-1"
                     << "\n";
            }
            else
            {
                cout << d1.back() << "\n";
            }
        }
    }
}
