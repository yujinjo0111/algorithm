#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int n, k;
queue<int> q;
vector<int> v;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout << "<";

    while (!q.empty())
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
        {
            cout << v[i] << ", ";
        }
        else
        {
            cout << v[i];
        }
    }
    cout << ">";
}