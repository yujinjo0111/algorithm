#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int>> que;
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            que.push({p, i});
            pq.push(p);
        }
        int a = 1;
        while (1)
        {
            int p = que.front().first;
            int q = que.front().second;
            if (p != pq.top())
            {
                que.pop();
                que.push({p, q});
            }
            else
            {
                if (q == m)
                    break;
                else
                {
                    que.pop();
                    pq.pop();
                    a++;
                }
            }
        }
        cout << a << "\n";
    }
    return 0;
}